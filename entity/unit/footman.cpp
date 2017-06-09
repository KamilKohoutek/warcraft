#include "footman.h"

Footman::Footman(QPointF pos) : Unit(pos, 1, 1, 2, 0)
{
    setMaxHP(60);
    setHP(60);
    QPixmap *spriteSheet = new QPixmap(":graphics/FOOTMAN");
    QPixmap *spriteSheetFlipped = new QPixmap(":graphics/FOOTMAN2");

    //walk animations

    movementAnims = new QList<Animation *>();


    QList<QList<int>> *walk0DegFrames = new QList<QList<int>>();
    walk0DegFrames->append(QList<int>() << 2 << 0);
    walk0DegFrames->append(QList<int>() << 2 << 1);
    walk0DegFrames->append(QList<int>() << 2 << 2);
    walk0DegFrames->append(QList<int>() << 2 << 1);

    Animation *walk0Deg = new Animation(spriteSheet, 48,48, walk0DegFrames, 250, true);

    movementAnims->append(walk0Deg);

    QList<QList<int>> *walk45DegFrames = new QList<QList<int>>();
    walk45DegFrames->append(QList<int>() << 6 << 0);
    walk45DegFrames->append(QList<int>() << 6 << 1);
    walk45DegFrames->append(QList<int>() << 6 << 2);
    walk45DegFrames->append(QList<int>() << 6 << 1);

    Animation *walk45Deg = new Animation(spriteSheet, 48,48, walk45DegFrames, 250, true);

    movementAnims->append(walk45Deg);

    QList<QList<int>> *walk90DegFrames = new QList<QList<int>>();
    walk90DegFrames->append(QList<int>() << 0 << 0);
    walk90DegFrames->append(QList<int>() << 0 << 1);
    walk90DegFrames->append(QList<int>() << 0 << 2);
    walk90DegFrames->append(QList<int>() << 0 << 1);

    Animation *walk90Deg = new Animation(spriteSheetFlipped, 48,48, walk90DegFrames, 250, true);

    movementAnims->append(walk90Deg);

    QList<QList<int>> *walk135DegFrames = new QList<QList<int>>();
    walk135DegFrames->append(QList<int>() << 14-6 << 0);
    walk135DegFrames->append(QList<int>() << 14-6 << 1);
    walk135DegFrames->append(QList<int>() << 14-6 << 2);
    walk135DegFrames->append(QList<int>() << 14-6 << 1);

    Animation *walk135Deg = new Animation(spriteSheetFlipped, 48,48, walk135DegFrames, 250, true);

    movementAnims->append(walk135Deg);

    QList<QList<int>> *walk180DegFrames = new QList<QList<int>>();
    walk180DegFrames->append(QList<int>() << 14-2 << 0);
    walk180DegFrames->append(QList<int>() << 14-2 << 1);
    walk180DegFrames->append(QList<int>() << 14-2 << 2);
    walk180DegFrames->append(QList<int>() << 14-2 << 1);

    Animation *walk180Deg = new Animation(spriteSheetFlipped, 48,48, walk180DegFrames, 250, true);

    movementAnims->append(walk180Deg);

    QList<QList<int>> *walk225DegFrames = new QList<QList<int>>();
    walk225DegFrames->append(QList<int>() << 11 << 0);
    walk225DegFrames->append(QList<int>() << 11 << 1);
    walk225DegFrames->append(QList<int>() << 11 << 2);
    walk225DegFrames->append(QList<int>() << 11 << 1);

    Animation *walk225Deg = new Animation(spriteSheetFlipped, 48,48, walk225DegFrames, 250, true);

    movementAnims->append(walk225Deg);

    QList<QList<int>> *walk270DegFrames = new QList<QList<int>>();
    walk270DegFrames->append(QList<int>() << 4 << 0);
    walk270DegFrames->append(QList<int>() << 4 << 1);
    walk270DegFrames->append(QList<int>() << 4 << 2);
    walk270DegFrames->append(QList<int>() << 4 << 1);

    Animation *walk270Deg = new Animation(spriteSheet, 48,48, walk270DegFrames, 250, true);

    movementAnims->append(walk270Deg);

    QList<QList<int>> *walk315DegFrames = new QList<QList<int>>();
    walk315DegFrames->append(QList<int>() << 3 << 0);
    walk315DegFrames->append(QList<int>() << 3 << 1);
    walk315DegFrames->append(QList<int>() << 3 << 2);
    walk315DegFrames->append(QList<int>() << 3 << 1);

    Animation *walk315Deg = new Animation(spriteSheet, 48,48, walk315DegFrames, 250, true);

    movementAnims->append(walk315Deg);

    //atack animations

    attackAnims = new QList<Animation *>();

    QList<QList<int>> *attack0DegFrames = new QList<QList<int>>();
    attack0DegFrames->append(QList<int>() << 8 << 0);
    attack0DegFrames->append(QList<int>() << 8 << 1);
    attack0DegFrames->append(QList<int>() << 7 << 2);
    attack0DegFrames->append(QList<int>() << 2 << 1);

    Animation *attack0Deg = new Animation(spriteSheet, 48,48, attack0DegFrames, 250, true);

    attackAnims->append(attack0Deg);

    QList<QList<int>> *attack45DegFrames = new QList<QList<int>>();
    attack45DegFrames->append(QList<int>() << 6 << 4);
    attack45DegFrames->append(QList<int>() << 6 << 3);
    attack45DegFrames->append(QList<int>() << 6 << 2);
    attack45DegFrames->append(QList<int>() << 6 << 4);

    Animation *attack45Deg = new Animation(spriteSheet, 48,48, attack45DegFrames, 250, true);

    attackAnims->append(attack45Deg);

    QList<QList<int>> *attack90DegFrames = new QList<QList<int>>();
    attack90DegFrames->append(QList<int>() << 5 << 0);
    attack90DegFrames->append(QList<int>() << 5 << 1);
    attack90DegFrames->append(QList<int>() << 5 << 2);
    attack90DegFrames->append(QList<int>() << 5 << 1);

    Animation *attack90Deg = new Animation(spriteSheet, 48,48, attack90DegFrames, 250, true);

    attackAnims->append(attack90Deg);

    QList<QList<int>> *attack135DegFrames = new QList<QList<int>>();
    attack135DegFrames->append(QList<int>() << 8 << 0);
    attack135DegFrames->append(QList<int>() << 8 << 1);
    attack135DegFrames->append(QList<int>() << 8 << 2);
    attack135DegFrames->append(QList<int>() << 8 << 1);

    Animation *attack135Deg = new Animation(spriteSheetFlipped, 48,48, attack135DegFrames, 250, true);

    attackAnims->append(attack135Deg);

    QList<QList<int>> *attack180DegFrames = new QList<QList<int>>();
    attack180DegFrames->append(QList<int>() << 6 << 3);
    attack180DegFrames->append(QList<int>() << 6 << 4);
    attack180DegFrames->append(QList<int>() << 7 << 2);
    attack180DegFrames->append(QList<int>() << 6 << 4);

    Animation *attack180Deg = new Animation(spriteSheetFlipped, 48,48, attack180DegFrames, 250, true);

    attackAnims->append(attack180Deg);

    QList<QList<int>> *attack225DegFrames = new QList<QList<int>>();
    attack225DegFrames->append(QList<int>() << 6 << 0);
    attack225DegFrames->append(QList<int>() << 6 << 1);
    attack225DegFrames->append(QList<int>() << 6 << 2);
    attack225DegFrames->append(QList<int>() << 6 << 1);

    Animation *attack225Deg = new Animation(spriteSheetFlipped, 48,48, attack225DegFrames, 250, true);

    attackAnims->append(attack225Deg);

    QList<QList<int>> *attack270DegFrames = new QList<QList<int>>();
    attack270DegFrames->append(QList<int>() << 9 << 0);
    attack270DegFrames->append(QList<int>() << 9 << 1);
    attack270DegFrames->append(QList<int>() << 9 << 2);
    attack270DegFrames->append(QList<int>() << 9 << 1);

    Animation *attack270Deg = new Animation(spriteSheet, 48,48, attack270DegFrames, 250, true);

    attackAnims->append(attack270Deg);

    QList<QList<int>> *attack315DegFrames = new QList<QList<int>>();
    attack315DegFrames->append(QList<int>() << 8 << 0);
    attack315DegFrames->append(QList<int>() << 8 << 1);
    attack315DegFrames->append(QList<int>() << 8 << 2);
    attack315DegFrames->append(QList<int>() << 8 << 1);

    Animation *attack315Deg = new Animation(spriteSheet, 48,48, attack315DegFrames, 250, true);

    attackAnims->append(attack315Deg);


    //death animation

    deathAnims = new QList<Animation *>();

    QList<QList<int>> *deathFrames = new QList<QList<int>>();
    deathFrames->append(QList<int>() << 10 << 0);
    deathFrames->append(QList<int>() << 11 << 0);
    deathFrames->append(QList<int>() << 10 << 1);
    deathFrames->append(QList<int>() << 11 << 1);
    deathFrames->append(QList<int>() << 10 << 2);
    deathFrames->append(QList<int>() << 11 << 2);

    Animation *death = new Animation(spriteSheet, 48,48, deathFrames, 250, false);

    deathAnims->append(death);
    
    setCurrentAnimation(walk0Deg);

}

QRectF Footman::boundingRect() const {
    return QRectF(24,24,44,44);
}
