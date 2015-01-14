#ifndef AVIONENNEMI_H
#define AVIONENNEMI_H

#include "Avion.h"

class AvionEnnemi : public Avion
    {
    public :
        /* Constructeur */
        AvionEnnemi(int id, int x, int y, int z, int dx, int dy, int dz);

        /* Methodes */
        void deplacement();             // Modifie les coordonnées de l'avion en fonction de sa direction. Ici, l'avion peut traverser les murs.
        void tir();                     // Modifie bool detruit d'un avion cible
        void nouvelleDirection();       // Modifie la direction de l'avion : Statégie de l'adversaire, s'aligner avec l'avion ami le plus proche.
    };
    
    
#endif