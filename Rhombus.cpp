#include "Rhombus.hpp"

float Rhombus::getArea(){//поиск площади
    return width*height;//площадь по правилу площади параллелограмма
}
float Rhombus::getPerimeter(){//поиск периметра
    return 4.0*width;//у ромба все стороны равны
}
Rhombus::Rhombus(float width, float height){
    this->width=width;
    this->height=height;//конструктор с параметрами
}
Rhombus::Rhombus(){
    width=0.0;
    height=0.0;
}//конструктор по умолчанию
int Rhombus::getWidth(){
    return width;
}
int Rhombus::getHeight(){
    return height;
}
void Rhombus::setWidth(int w){
    width=w;
}
void Rhombus::setHeight(int h){
    height=h;
}
Rhombus::~Rhombus(){
    
}
