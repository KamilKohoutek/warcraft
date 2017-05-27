#ifndef HUMANBLACKSMITH_H
#define HUMANBLACKSMITH_H

#include "building.h"



class HumanBlacksmith : public Building
{
public:
    static const int COST_GOLD = 900;
    static const int COST_LUMBER = 400;
    static const int HP = 800;
    static const int BUILD_TIME = 1500*1000;

    HumanBlacksmith(QPointF pos, bool finishedOnSpawn);

    // Entity interface
    void update() override;
};

#endif // HUMANBLACKSMITH_H
