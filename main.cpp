#include <iostream>
#include <vector>
#include "figure.h"

int main() {
    std::vector<figure*> figuras_1;
    figuras_1.push_back(new rectangle(1, 1, 4, 5));
    figuras_1.push_back(new triangle(0, 0, 1, 2, 2, 0));
    // figuras.push_back(new circle(0, 0, 3));
    for (auto& f : figuras_1) {
        f->draw();
    }
    std::vector<figure*> figuras_2 = figuras_1;
    for (auto& f : figuras_2) {
        f->draw();
    }
    std::vector<figure*> figuras_3;
    figuras_3 = figuras_2;
    for (auto& f : figuras_3) {
        f->draw();
    }

    return 0;
}
