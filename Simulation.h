//
// Created by benxidosz on 2020. 06. 14..
//

#ifndef PHYSICS_HOMEWORK_SIMULATION_H
#define PHYSICS_HOMEWORK_SIMULATION_H
#include "Atom.h"
#include "Components.h"

class Simulation {
    Atom atom;
    Vector B;
    Vector g;
    size_t width;
    size_t height;

public:
    Simulation(size_t w, size_t h, double g, double b, double q, double  m) : width(w), height(h), g(0, g ,0), B(0,0, b), atom(w, h/2, q, m) {}
    
    void simulate(std::ofstream& out);
};


#endif //PHYSICS_HOMEWORK_SIMULATION_H
