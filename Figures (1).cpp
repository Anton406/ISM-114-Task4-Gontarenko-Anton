

#include "Figures.hpp"

    float Romb::square(){//поиск площади
        return a*b;//площадь по правилу площади параллелограмма
    }
    float Romb::perimeter(){//поиск периметра
        return 4.0*a;//у ромба все стороны равны
    }
    Romb::Romb(float A, float h){
        a =A;b=h;//конструктор с параметрами
    }
    Romb::Romb(){
        a=0.0;b=0.0;
    }//конструктор по умолчанию
    

     Rectangle::Rectangle(float A, float B){
  //вызываем родительский конструктор
         a =A;b=B;//конструктор с параметрами
    }
    Rectangle::Rectangle(){
        a=0.0;b=0.0;
    }//конструктор по умолчанию
    float Rectangle::square(){//поиск площади
        return a*b;//площадь равна произведению сторон
    }
    float Rectangle::perimeter(){//поиск периметра
        return 2*a+2*b;//две стороны длиной а и две стороны длиной b
    }

Ellipse::Ellipse(float A, float B){
  //фокусы а и б
    a =A;b=B;//конструктор с параметрами
    }
    Ellipse::Ellipse(){
        a=0.0;b=0.0;
    }//конструктор по умолчанию
    float Ellipse::square(){//поиск площади
        return 3.14*a*b;
    }
    float Ellipse::perimeter(){//поиск периметра
        return 4*(3.14*a*b+(a-b))/(a+b);//формула периметра эллипса по двум фокусам
    }

