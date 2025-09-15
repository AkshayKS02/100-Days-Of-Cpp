#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Calculator {
private: T a,b;
         char op;
public:
    void Input(){
        cout<<"Enter the First Number : ";
        cin>>a;
        cout<<"Enter operator (+,-,*,/) : ";
        cin>>op;
        cout<<"Enter the Second Number : ";
        cin>>b;
    }
    void Output(){
        T result;
        switch(op){
            case '+' : result=this->add(); break;
            case '-' : result=this->subtract(); break;
            case '*' : result=this->multiply(); break;
            case '/' : {
                        try{
                            result=this->divide(); 
                            break;
                        }
                        catch(const runtime_error& msg){
                            cout<<"Exception Occured : "<<msg.what()<<endl;
                            return;
                        }
                    }
            default : cout<<"Error : Invalid Operator : "<<op; return; 
        }
        cout<<"Result : "<<result<<endl;
    }
    T add() {
        return a + b;
    }
    T subtract() {
        return a - b;
    }
    T multiply() {
        return a * b;
    }
    T divide() {
        if (b == 0) {
            throw runtime_error("Cannot divide by zero");
        }
        return a / b;
    }
};

int main(){
    Calculator<int> IntNum;
    Calculator<float> FloatNum;
    Calculator<double> DoubleNum;
    int datatype;
    char conti;
    do{
        cout<<"\n---Generic Calculator---"<<endl;
        cout<<"Choose Datatype (1.int 2.float 3.double) : ";
        cin>>datatype;

        switch(datatype){
            case 1 : IntNum.Input();
                    IntNum.Output();
                    break;
            case 2 : FloatNum.Input();
                    FloatNum.Output();
                    break;
            case 3 : DoubleNum.Input();
                    DoubleNum.Output();
                    break;
            default : cout<<"Error : Invalid Datatype"<<endl;
                    break;
        }
        cout<<"Do you want to continue (y/n) : ";
        cin>>conti;
    }while(conti=='y' || conti=='Y');

    cout << "\nExiting Calculator... Goodbye!\n";
    return 0;
}