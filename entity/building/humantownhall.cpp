#include "humantownhall.h"

HumanTownHall::HumanTownHall(QPointF pos, bool finishedOnSpawn) : Building(pos, finishedOnSpawn, HUMAN, QList<int>() << 1 << 1, QList<int>() << 0 << 1, 48, 48, BUILD_TIME, HP)
{

}

void HumanTownHall::update()
{

}
