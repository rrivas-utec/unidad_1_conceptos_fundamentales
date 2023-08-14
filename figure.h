//
// Created by rudri on 8/14/2023.
//

#ifndef UNIDAD_1_CONCEPTOS_FUNDAMENTALES_FIGURE_H
#define UNIDAD_1_CONCEPTOS_FUNDAMENTALES_FIGURE_H


#include "line.h"
#include "point.h"

class figure {
public:
    virtual ~figure();
    virtual void draw() const = 0;  // Método virtual puro
};

class rectangle : public figure {
private:
    line l1, l2, l3, l4;
public:
    rectangle(double x1, double y1,
              double x2, double y2);
    ~rectangle();
    void draw() const override;
};

class triangle : public figure {
private:
    point p1, p2, p3;

public:
    triangle(double x1, double y1,
             double x2, double y2,
             double x3, double y3);
    ~triangle();

    void draw() const override;
};

#endif //UNIDAD_1_CONCEPTOS_FUNDAMENTALES_FIGURE_H
