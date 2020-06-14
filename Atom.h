//
// Created by benxidosz on 2020. 06. 14..
//

#ifndef PHYSICS_HOMEWORK_ATOM_H
#define PHYSICS_HOMEWORK_ATOM_H
#include "Components.h"
#include <iostream>
#include <fstream>
#include <cmath>

class Atom {
    double Q;
    double m;
    Position position;
    Vector velocity;

public:
    Atom(double x, double y, double q, double m) : position(x, y), Q(q), m(m), velocity(0,0){}
    
    void move();
    
    void print(std::ofstream& out);
    
    void push_force(Vector force);
};


#endif //PHYSICS_HOMEWORK_ATOM_H
