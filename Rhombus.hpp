#pragma once
#include "Figures.hpp"
class Rhombus:public Figure{//класс с описанием ромба -  подвид фигуры
public:
    //здесь width - сторона, heght - высота
    float getArea();
    float getPerimeter();
    Rhombus(float width, float height);
    Rhombus();
    ~Rhombus();
    int getWidth();
    int getHeight();
    void setWidth(int w);
    void setHeight(int h);
};

