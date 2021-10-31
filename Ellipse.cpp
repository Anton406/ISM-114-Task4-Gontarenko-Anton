#include "Ellipse.hpp"

Ellipse::Ellipse(float width, float height){
  //фокусы а и б
    this->width=width;
    this->height=height;//конструктор с параметрами
}
Ellipse::Ellipse(){
    width=0.0;
    height=0.0;
}//конструктор по умолчанию
float Ellipse::getArea(){//поиск площади
    return 3.14*width*height;
}
float Ellipse::getPerimeter(){//поиск периметра
    return 4*(3.14*width*height+(width-height))/(width+height);//формула периметра эллипса по двум фокусам
}
Ellipse::~Ellipse(){
    
}
int Ellipse::getWidth(){
    return width;
}
int Ellipse::getHeight(){
    return height;
}
void Ellipse::setWidth(int w){
    width=w;
}
void Ellipse::setHeight(int h){
    height=h;
}
