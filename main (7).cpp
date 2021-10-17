#include <iostream>
#include "Figures.hpp"
using namespace std;

int main() {
    cout<<"выберите фигуру: 1-ромб, 2-прямоугольник, 3-эллипс"<<endl;
    int ch;
    cin>>ch;
    switch(ch){
        case 1:{
            Romb a;
            cout<<"enter a,b"<<endl;
            cin>>a.a>>a.b;
            cout<<"p="<<a.perimeter()<<", s="<<a.square()<<endl;
        }break;
        case 2:{
            Rectangle a;
            cout<<"enter a,b"<<endl;
            cin>>a.a>>a.b;
            cout<<"p="<<a.perimeter()<<", s="<<a.square()<<endl;
        }break;
        case 3:{
            Ellipse a;
            cout<<"enter a,b"<<endl;
            cin>>a.a>>a.b;
            cout<<"p="<<a.perimeter()<<", s="<<a.square()<<endl;
        }break;
        default:{
            
        }break;
    }
    return 0;
}
