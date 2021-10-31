#pragma once
#include "Figures.hpp"
class Rectangle:public Figure{//прямоугольник -  подвид фигуры
public:
    Rectangle(float A, float B);
    Rectangle();
    float getArea();
    float getPerimeter();
    ~Rectangle();
    int getWidth();
    int getHeight();
    void setWidth(int w);
    void setHeight(int h);
};

