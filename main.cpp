#include <iostream>
#include <fstream>
#include "Simulation.h"

int main() {
    std::ofstream out;
    out.open("plot.svg");
    Simulation simulation(1024, 720, 9.8, 0.5, 1.6 * std::pow(10,-19), 9.1 * std::pow(10, -31));
    simulation.simulate(out);
    out.close();
    return 0;
}
