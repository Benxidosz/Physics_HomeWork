//
// Created by benxidosz on 2020. 06. 14..
//

#ifndef PHYSICS_HOMEWORK_COMPONENTS_H
#define PHYSICS_HOMEWORK_COMPONENTS_H

#include <cmath>

struct Vector{
    double angle;
    double magnitude;
    double cx;
    double cy;
    
    Vector(double a, double m) : angle(a), magnitude(m), cx(std::cos(a) * m), cy(std::sin(a) * m) {}
    
    void add_vector(Vector vector);
    
    Vector& operator=(Vector&);
    
    Vector& operator/(double);
};

struct Position {
    double x;
    double y;
    
    Position(double x, double y) : x(x), y(y) {}
    Position (Position const &other) = default;
    
    void add_vector(Vector vector);
};

#endif //PHYSICS_HOMEWORK_COMPONENTS_H
