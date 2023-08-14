//
// Created by rudri on 8/14/2023.
//

#include <iostream>
#include "point.h"

point::point(double x, double y): x(x), y(y) {
    std::cout << "Constructor del Punto" << std::endl;
}

point::~point() {
    std::cout << "Destructor del Punto" << std::endl;
}

void point::show() const {
    std::cout << "(" << x << ", " << y << ")";
}
