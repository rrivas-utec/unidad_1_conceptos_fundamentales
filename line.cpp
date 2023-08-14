//
// Created by rudri on 8/14/2023.
//

#include <iostream>
#include "line.h"

line::line(double x1, double y1, double x2, double y2)
    :start(x1, y1), finish(x2, y2) {
    std::cout << "Constructor de la Linea" << std::endl;

}

line::~line() {

}

void line::show() const {

}
