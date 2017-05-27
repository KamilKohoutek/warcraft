#ifndef HUMANFARM_H
#define HUMANFARM_H

#include "building.h"



class HumanFarm : public Building
{
public:
    static const int COST_GOLD = 500;
    static const int COST_LUMBER = 300;
    static const int HP = 800;
    static const int BUILD_TIME = 1000*1000;

    HumanFarm(QPointF pos, bool finishedOnSpawn);

    // Entity interface
    void update() override;
};

#endif // HUMANFARM_H
