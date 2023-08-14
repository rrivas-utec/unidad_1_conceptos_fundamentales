//
// Created by rudri on 8/14/2023.
//

#include "figure.h"

figure::~figure() {

}

rectangle::rectangle(double x1, double y1, double x2, double y2) :
  l1(x1, y1, x2, y1),
  l2(x2, y1, x2, y2),
  l3(x2, y2, x1, y2),
  l4(x1, y2, x1, y1) {

}

rectangle::~rectangle() {

}

void rectangle::draw() const {

}

triangle::triangle(double x1, double y1, double x2, double y2, double x3, double y3) {

}

triangle::~triangle() {

}

void triangle::draw() const {

}
