#include <iostream>
#include <fstream>
#include "Simulation.h"

int main() {
    std::ofstream out;
    out.open("plot.svg");
    Simulation simulation(5000, 3000, -9.8, 3 * std::pow(10, -12 ), 1.6 * std::pow(10,-19), 9.1 * std::pow(10,-31));
    simulation.simulate(out);
    out.close();
    return 0;
}
