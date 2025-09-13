#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class ComplexNumber{
    private: float real,imag;
    public: ComplexNumber() { real = 0; imag = 0; }  // default constructor
            ComplexNumber(float real_num,float imag_num){
                real=real_num;
                imag=imag_num;
            }
            void Display();
            ComplexNumber operator+(ComplexNumber c){
                 return ComplexNumber(this->real+c.real,this->imag+c.imag);
            }
            ComplexNumber operator-(ComplexNumber d){
                return ComplexNumber(this->real-d.real,this->imag-d.imag);
            }
            ComplexNumber operator*(ComplexNumber e){
                return ComplexNumber((this->real*e.real)-(this->imag*e.imag),(this->real*e.imag)+(this->imag*e.real));
            }
};

void ComplexNumber::Display(){
    if(imag>0)
        printf("The complex number is : %.3f + i(%.3f)\n",real,imag);
    else 
        printf("The complex number is : %.3f - i(%.3f)\n",real,fabs(imag));
}

int main(){
    float user_real1,user_img1,user_real2,user_img2;
    char op,conti;
    do{
        cout<<"Enter the  first complex number (real_part imag part): ";
        cin>>user_real1>>user_img1;
        ComplexNumber c(user_real1,user_img1);
        cout<<"Enter the operation(+,-,*): ";
        cin>>op;
        cout<<"Enter the second complex number (real_part imag part): ";
        cin>>user_real2>>user_img2;
        ComplexNumber result,d(user_real2,user_img2);
        switch(op){
            case '+' : result= c+d;
                       break;
            case '-' : result= c-d;
                       break;
            case '*' : result= c*d;
                       break;
            default: printf("Invalid input");
                     continue;
        }   
        result.Display();
        cout<<"Do you want to continue(y/n) : ";
        cin>>conti;
    }while(conti!='n');
    return 0;
}