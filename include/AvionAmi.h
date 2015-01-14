#ifndef AVIONAMI_H
#define AVIONAMI_H

#include "Avion.h"

class AvionAmi: public Avion
{
public:
    AvionAmi(int id, int x, int y, int z, int dx, int dy, int dz);//: Avion(int id, 'A', int x, int y, int z, int dx, int, dy, int dz);
    void deplacement();
    void tir();
    void nouvelleDirection();
};

#endif