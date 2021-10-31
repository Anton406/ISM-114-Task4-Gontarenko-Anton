#pragma once
#include "Figures.hpp"

class Ellipse:public Figure{//эллипс - подвид фигуры
public:
    Ellipse(float width, float height);
    Ellipse();
    float getArea();
    float getPerimeter();
    ~Ellipse();
    int getWidth();
    int getHeight();
    void setWidth(int w);
    void setHeight(int h);
};
