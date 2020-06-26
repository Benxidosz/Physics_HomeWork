//
// Created by benxidosz on 2020. 06. 14..
//

#include "Components.h"
#include <cmath>

void Position::add_vector(Vector vector){
    this->x += vector.cx;
    this->y -= vector.cy;
}

Vector Vector::operator=(Vector other) {
    this->cx = other.cx;
    this->cy = other.cy;
    this->cz = other.cz;
    return *this;
}

Vector Vector::operator/(double p) {
    
    return Vector(this->cx/p, this->cy/p, this->cz/p );
}

Vector Vector::operator+(Vector vector) {
    return Vector(this->cx + vector.cx, this->cy + vector.cy, this->cz + vector.cz);
}

Vector Vector::operator*(double p) {
    return Vector(this->cx * p, this->cy * p, this->cz * p);
}

Vector Vector::CrossMultypli(Vector other) {
    return Vector((this->cy * other.cz) - (this->cz * other.cy), (this->cx * other.cz) - (this->cz * other.cx), (this->cx * other.cy) - (this->cy * other.cx));
}

std::ostream& operator<<(std::ostream& os, Vector& vector) {
    os << "(" << vector.cx << ", " << vector.cy << ", " << vector.cz << ")\n";
    return os;
}
