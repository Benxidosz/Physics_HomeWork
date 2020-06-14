//
// Created by benxidosz on 2020. 06. 14..
//

#include "Atom.h"

void Atom::move() {
    position.add_vector(velocity);
}

void Atom::print(std::ofstream& out) {
    out << "\t<circle cx='" << position.x << "' cy='" << position.y << "' r='5' fill='red' />\n";
}

void Atom::push_force(Vector force) {

}
