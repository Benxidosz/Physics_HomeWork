//
// Created by benxidosz on 2020. 06. 14..
//

#include "Simulation.h"

void background(std::ofstream& out, double width, double height){
    out << "\t<rect width='" << width << "' height='" << height << "' fill='white' />\n";
    out << "\t<line x1='" << width/2 << "' y1='0' x2='" << width/2 << "' y2='" << height << "' stroke='black' />\n";
    out << "\t<line y1='" << height/2 << "' x1='0' x2='" << width << "' y2='" << height/2 << "' stroke='black' />\n";
    out << "\t<circle cx='10' cy='10' r='10' fill='white' stroke='black' />\n";
    out << "\t<circle cx='10' cy='10' r='2.5' fill='black' stroke='black' />\n";
}

void Simulation::simulate(std::ofstream &out) {
    out << "<svg height='" << height << "' width='" << width << "'>\n";
    background(out, this->width, this->height);
    atom.print(out);
    for(int i = 0; i < 10000; ++i){
        Vector F = (this->atom.get_v() * this->atom.get_Q()).CrossMultypli(this->B) ;
        Vector G = this->g * this->atom.get_m();
        atom.push_force(G + F);
        std::cout << "V" << this->atom.get_v();
        std::cout << "F" << F;
        atom.move();
        atom.print(out);
    }
    out << "</svg>";
}
