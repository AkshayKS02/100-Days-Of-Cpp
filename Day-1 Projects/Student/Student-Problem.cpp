#include<bits/stdc++.h>
#include<string>
using namespace std;

class Student{
    private: int roll_no;
             string name;
             float marks;
    public: Student(int roll, string Name , float Marks){
                roll_no=roll;
                name=Name;
                marks=Marks;
            }
            void Display(){
                cout<<"Roll No : "<<roll_no<<", Name: "<<name<<", Marks: "<<marks;
            }
};

int main(){
    int St_roll;
    string St_name;
    float St_marks;
    cout<<"Roll : ";
    cin>>St_roll;
    cout<<"Name : ";
    getline(cin,St_name);
    cout<<"Marks : ";
    cin>>St_marks;
    Student s1(St_roll,St_name,St_marks);
    s1.Display();
    return 0;
}