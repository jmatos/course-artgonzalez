//line.h
#include "shape.h"

using std::cout;

#ifndef LINE_H
#define LINE_H

class Line : public Shape {
    public:
        void draw() {
            cout << "Line\n";
        }
};

#endif 