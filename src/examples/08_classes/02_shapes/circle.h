//circle.h
#include "shape.h"

using std::cout;

#ifndef CIRCLE_H
#define CIRCE_H

class Circle : public Shape {
    public:
        void draw() {
            cout << "Circle\n";
        }
};

#endif 