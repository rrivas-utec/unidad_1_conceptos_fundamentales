//
// Created by rudri on 8/14/2023.
//

#ifndef UNIDAD_1_CONCEPTOS_FUNDAMENTALES_POINT_H
#define UNIDAD_1_CONCEPTOS_FUNDAMENTALES_POINT_H


struct point {
    double x, y;
    point(double x = 0, double y = 0);
    ~point();
    void show() const;
};


#endif //UNIDAD_1_CONCEPTOS_FUNDAMENTALES_POINT_H
