#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void numberOfSides()=0;
};

class Trapezoid : public Shape{
    int sides;
    public:
        Trapezoid(){
            sides = 4;
        }
        void numberOfSides(){
            cout<<"\n No. Of Sides In Trapezoid = "<<sides<<endl;
        }
};

class Triangle : public Shape{
    int sides;
    public:
        Triangle(){
            sides = 3;
        }
        void numberOfSides(){
            cout<<"\n No. Of Sides In Triangle = "<<sides<<endl;
        }
};

class Hexagon : public Shape{
    int sides;
    public:
        Hexagon(){
            sides = 6;
        }
        void numberOfSides(){
            cout<<"\n No. Of Sides In Hexagon = "<<sides<<endl;
        }
};

int main(){
    Trapezoid trapezoid;
    trapezoid.numberOfSides();
    Triangle triangle;
    triangle.numberOfSides();
    Hexagon hexagon;
    hexagon.numberOfSides();
    return 0;
}