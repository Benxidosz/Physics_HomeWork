//
// Created by benxidosz on 2020. 06. 14..
//

#ifndef PHYSICS_HOMEWORK_COMPONENTS_H
#define PHYSICS_HOMEWORK_COMPONENTS_H

#include <cmath>

struct Vector{
    double cx;
    double cy;
    
    Vector(double cx, double cy) : cx(cx), cy(cy) {}
    
    Vector operator=(Vector);
    
    Vector operator/(double);
    Vector operator*(double);
    
    Vector operator+(Vector);
};

struct Position {
    double x;
    double y;
    
    Position(double x, double y) : x(x), y(y) {}
    Position (Position const &other) = default;
    
    void add_vector(Vector vector);
};

#endif //PHYSICS_HOMEWORK_COMPONENTS_H
