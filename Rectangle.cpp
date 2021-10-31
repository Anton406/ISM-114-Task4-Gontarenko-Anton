#include "Rectangle.hpp"


Rectangle::Rectangle(float width, float height){
//вызываем родительский конструктор
    this->width=width;
    this->height=height;//конструктор с параметрами
}
Rectangle::Rectangle(){
   width=0.0;
   height=0.0;
}//конструктор по умолчанию
float Rectangle::getArea(){//поиск площади
   return width*height;//площадь равна произведению сторон
}
float Rectangle::getPerimeter(){//поиск периметра
   return 2*width+2*height;//две стороны длиной а и две стороны длиной b
}
Rectangle::~Rectangle(){
    
}
int Rectangle::getWidth(){
    return width;
}
int Rectangle::getHeight(){
    return height;
}
void Rectangle::setWidth(int w){
    width=w;
}
void Rectangle::setHeight(int h){
    height=h;
}
