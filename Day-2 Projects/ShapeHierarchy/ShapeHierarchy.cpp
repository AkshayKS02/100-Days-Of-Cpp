#include<bits/stdc++.h>
#include<math.h>
#define PI 3.14
using namespace std;

class Shape{
public:
    virtual double area()=0;
};

class Circle:public Shape{
private: double r;
public: 
    Circle(double radius): r(radius){}
    double area() override{
        return PI*r*r;
    }
    
};

class Rectangle:public Shape{
private: double length,breadth;
public:
    Rectangle(double l,double b){
        length=l;
        breadth=b;
    }
    double area() override{
        return length*breadth;
    }
};

class Triangle:public Shape{
private:double a,b,c;
public:
    Triangle(double first,double second,double third){
        a=first;
        b=second;
        c=third;
    }
    double area() override{
        double p=(a+b+c)/2,area;
        area=sqrt(p*(p-a)*(p-b)*(p-c));
        return area;
    }
};

int main(){
    double result;
    Shape* s1 = new Circle(4);
    result=s1->area();
    cout<<"Circle Area : "<<result<<endl;
    Shape* s2 = new Rectangle(2,3);
    result=s2->area();    
    cout<<"Rectangle Area : "<<result<<endl;
    Shape* s3= new Triangle(3,4,5);
    result=s3->area();
    cout<<"Triangle Area : "<<result<<endl;
    return 0;
}