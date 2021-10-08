//
//  main.cpp
//  labcpp
//
//  Created by Админ on 07.10.2021.
//

#include <iostream>
using namespace std;
class Romb{//основной базовый класс с описанием ромба
public:
    float a,b;//здесь а - сторона, b - высота
    float square(){//поиск площади
        return a*b;//площадь по правилу площади параллелограмма
    }
    float perimeter(){//поиск периметра
        return 4.0*a;//у ромба все стороны равны
    }
    Romb(float A, float h){
        a =A;b=h;//конструктор с параметрами
    }
    Romb(){
        a=0.0;b=0.0;
    }//конструктор по умолчанию
    void enter(){
        cout<<"введите a,b:"<<endl;
        cin>>a>>b;
    }
    void print(){
        cout<<"a="<<a<<"; b="<<b<<endl;
        cout<<"S = "<<square()<<"; P = "<<perimeter()<<endl;
    }
};
class Pryamougolnik:public Romb{//прямоугольник - подвид ромба в иерархии классов
public:
    Pryamougolnik(float A, float B):Romb(A,B){
  //вызываем родительский конструктор
        
    }
    Pryamougolnik():Romb(){
    
    }//конструктор по умолчанию
    float square(){//поиск площади
        return a*b;//площадь равна произведению сторон
    }
    float perimeter(){//поиск периметра
        return 2*a+2*b;//две стороны длиной а и две стороны длиной b
    }
};
class Ellips:public Pryamougolnik{//эллипс - подвид прямоугольника в иеррахии классов
public:
    Ellips(float A, float B):Pryamougolnik(A,B){
  //фокусы а и б
        
    }
    Ellips():Pryamougolnik(){
    
    }//конструктор по умолчанию
    float square(){//поиск площади
        return 3.14*a*b;
    }
    float perimeter(){//поиск периметра
        return 4*(3.14*a*b+(a-b))/(a+b);//формула периметра эллипса по двум фокусам
    }
};
int main() {
    cout<<"выберите фигуру: 1-ромб, 2-прямоугольник, 3-эллипс"<<endl;
    int ch;
    cin>>ch;
    switch(ch){
        case 1:{
            Romb a;
            a.enter();
            a.print();
        }break;
        case 2:{
            Pryamougolnik a;
            a.enter();
            a.print();
        }break;
        case 3:{
            Ellips a;
            a.enter();
            a.print();
        }break;
        default:{
            
        }break;
    }
    return 0;
}
