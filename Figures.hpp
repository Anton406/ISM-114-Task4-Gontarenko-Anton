/**
 *
 *  Figure-базовый абстрактный класс с описанием фигуры, содержит методы для вычисления периметра и площади
 *  Romb-ромб , производный класс, одно число - основание, другое число - высота
 *       Rectangle - производный класс от фигуры, прямоугольник , два числа - стороны прямоугольника
 * Ellipse-эллипс, два числа - расстояние между фокусами a, b
 */

#ifndef Figures_hpp
#define Figures_hpp

#include <stdio.h>
class Figure{// базовый класс
public:
    float a,b;
    float square();
    float perimeter();
    
};
class Romb:public Figure{//класс с описанием ромба -  подвид фигуры
public:
    //здесь а - сторона, b - высота
    float square();
    float perimeter();
    Romb(float A, float h);
    Romb();
};
class Rectangle:public Figure{//прямоугольник -  подвид фигуры
public:
    Rectangle(float A, float B);
    Rectangle();
    float square();
    float perimeter();
};
class Ellipse:public Figure{//эллипс - подвид фигуры
public:
    Ellipse(float A, float B);
    Ellipse();
    float square();
    float perimeter();
};
#endif
