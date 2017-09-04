#ifndef BFS_H
#define BFS_H

#include "graph.h"
#include <QList>

class BFS
{
public:
    static QList<QPointF> shortestPath(Node *start, Node *goal);
private:
    BFS();
};

#endif // BFS_H
