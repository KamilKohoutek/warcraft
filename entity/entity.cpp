#include "entity.h"

#include <QPainter>

Entity::Entity(QPointF pos, QPixmap *spriteSheet) {
    this->spriteSheet = spriteSheet;
    this->setPos(pos);

}

Entity::~Entity()
{
    delete spriteSheet;
    delete currentAnimation;
}

void Entity::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {


    painter->drawPixmap(0, 0, *spriteSheet, currentAnimation->currentPositionX(), currentAnimation->currentPositionY(),
                                            currentAnimation->getSubImageWidth(), currentAnimation->getSubImageHeight());

    //painter->drawRect(boundingRect());
    painter->setBrush(QBrush(Qt::green));
    painter->setPen(QPen(Qt::green));
    painter->drawRect(0,0, hp*currentAnimation->getSubImageWidth()/maxHP, 1.5f); // health bar

    Q_UNUSED(option);
    Q_UNUSED(widget);
}


void Entity::setCurrentAnimation(Animation *anim) {
    currentAnimation = anim;
}

void Entity::setHP(int hp)
{
    this->hp = hp;
}

int Entity::getHP(){
    return hp;
}

void Entity::setMaxHP(int hp)
{
    maxHP = hp;
}

int Entity::getMaxHP()
{
    return maxHP;
}
