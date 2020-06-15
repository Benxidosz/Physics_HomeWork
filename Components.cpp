//
// Created by benxidosz on 2020. 06. 14..
//

#include "Components.h"

void Position::add_vector(Vector vector){
    this->x += vector.cx;
    this->y -= vector.cy;
}

Vector Vector::operator=(Vector other) {
    this->cx = other.cx;
    this->cy = other.cy;
    return *this;
}

Vector Vector::operator/(double p) {
    
    return Vector(this->cx/p, this->cy/p);
}

Vector Vector::operator+(Vector vector) {
    return Vector(this->cx + vector.cx, this->cy + vector.cy);
}

Vector Vector::operator*(double p) {
    return Vector(this->cx * p, this->cy * p);
}
