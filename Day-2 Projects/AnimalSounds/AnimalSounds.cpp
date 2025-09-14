#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
    virtual void speak()=0;
};

class Dog:public Animal{
public:
    void speak() override{
        cout<<"Woof!"<<endl;
    }
};

class Cat:public Animal{
public:
    void speak() override{
        cout<<"Meow!"<<endl;
    }
};

class Cow:public Animal{
public:
    void speak() override{
        cout<<"Moo!"<<endl;
    }
};

int main(){
    Animal* a1=new Dog();
    a1->speak();
    Animal* a2=new Cat();
    a2->speak();
    Animal* a3=new Cow();
    a3->speak();
    return 0;
}