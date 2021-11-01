#include <iostream>
#include "Figures.hpp"
#include "Ellipse.hpp"
#include "Rhombus.hpp"
#include "Rectangle.hpp"
using namespace std;

int main() {
    cout<<"выберите фигуру: 1-ромб, 2-прямоугольник, 3-эллипс"<<endl;
    int ch;
    cin>>ch;
    float w,h;
    switch(ch){
        case 1:{
            cout<<"enter width,height"<<endl;
            cin>>w>>h;
            Rhombus a(w,h);
            cout<<"p="<<a.getPerimeter()<<", s="<<a.getArea()<<endl;
        }break;
        case 2:{
            cout<<"enter width,height"<<endl;
            cin>>w>>h;
            Rectangle a(w,h);
            cout<<"p="<<a.getPerimeter()<<", s="<<a.getArea()<<endl;
        }break;
        case 3:{
            cout<<"enter width,height"<<endl;
            cin>>w>>h;
            Ellipse a(w,h);
            cout<<"p="<<a.getPerimeter()<<", s="<<a.getArea()<<endl;
        }break;
        default:{
            
        }break;
    }
    return 0;
}
