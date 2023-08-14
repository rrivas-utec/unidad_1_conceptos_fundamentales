//
// Created by rudri on 8/14/2023.
//

#ifndef UNIDAD_1_CONCEPTOS_FUNDAMENTALES_LINE_H
#define UNIDAD_1_CONCEPTOS_FUNDAMENTALES_LINE_H

#include "point.h"

class line {
private:
    point start, finish;
public:
    line(double x1, double y1, double x2, double y2);
    ~line();
    void show() const;
};


#endif //UNIDAD_1_CONCEPTOS_FUNDAMENTALES_LINE_H
