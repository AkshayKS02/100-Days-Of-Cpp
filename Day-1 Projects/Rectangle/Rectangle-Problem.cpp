#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private: float length,breadth;
    public: Rectangle(float l,float b){
                length=l;
                breadth=b;    
            }
            float Area();
            float Perimeter();
};

float Rectangle::Area(){
    return length*breadth;
}

float Rectangle::Perimeter(){
    return 2*(length+breadth);
}
int main(){
    float x,y;
    cout<<"Enter Length and Breadth of the Rectangle : ";
    cin>>x>>y;
    Rectangle r(x,y);
    cout<<r.Area()<<"\t"<<r.Perimeter();
    return 0;
}
