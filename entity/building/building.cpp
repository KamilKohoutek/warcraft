#include "building.h"

Building::Building(QPointF pos, BuildingType type, bool finishedOnSpawn, Race race, QList<int> preFrame, QList<int> endFrame, int buildTime, int maxHP, ResourceManager *rm) : Entity(pos)
{
    setMaxHP(maxHP);
    this->buildTime = buildTime;
    this->type = type;

    QPixmap *spriteSheet;
    switch(race){
    case HUMAN:
        spriteSheet = rm->getSprite("BUILDINGS_H");
        break;
    case ORC:
        spriteSheet = rm->getSprite("BUILDINGS_O");
        break;
    }

    QList<QList<int>> frames;
    frames.append(QList<int>() << 0 << 0);
    frames.append(QList<int>() << 1 << 0);
    frames.append(preFrame);
    frames.append(endFrame);

    buildAnimation = new Animation(spriteSheet, 48, 48, frames, buildTime/frames.size(), false);
    setCurrentAnimation(buildAnimation);
    buildAnimation->stop();

    if(finishedOnSpawn){
        finished = true;
        buildTimer = nullptr;
        setHP(maxHP);
        buildAnimation->setCurrentFrame(3);
    } else {
        setHP(0);
        finished = false;
        buildTimer = new QTimer();
        buildTimer->setInterval(buildTime/maxHP);
        connect(buildTimer, &QTimer::timeout, this, &constructionUpdate);
        buildAnimation->start();
        buildTimer->start();
    }

    scaleX = 2;
    scaleY = 2;

    setZValue(-1);

}

Building::~Building() {
    delete buildTimer;
}

void Building::update(){

}

void Building::constructionUpdate() {
    if(getHP() + 1 < getMaxHP()){
        setHP(getHP()+1);
    } else {
        buildTimer->stop();
        delete buildTimer;
        buildTimer = nullptr;
        finished = true;
    }
}

bool Building::isBuildingFinished() const {
    return finished;
}

BuildingType Building::getType() const {
    return type;
}

