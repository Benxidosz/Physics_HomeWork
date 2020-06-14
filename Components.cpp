//
// Created by benxidosz on 2020. 06. 14..
//

#include "Components.h"

void Position::add_vector(Vector vector){
    this->x += std::cos(vector.angle) * vector.magnitude;
    this->y -= std::sin(vector.angle) * vector.magnitude;
}


void Vector::add_vector(Vector vector) {
    double newAngle = std::atan((this->cy + vector.cy) / (this->cx + vector.cx));
    double newMagnitude = sqrt(pow(this->cx + vector.cx,2) + pow(this->cy + vector.cy,2));
    Vector newVector(newAngle, newMagnitude);
    (*this) = newVector;
}

Vector &Vector::operator=(Vector & other) {
    this->cx = other.cx;
    this->cy = other.cy;
    this->magnitude = other.magnitude;
    this->angle = other.angle;
    return *this;
}

Vector &Vector::operator/(double p) {
    Vector ret(this->angle, this->magnitude/p);
    return ret;
}
