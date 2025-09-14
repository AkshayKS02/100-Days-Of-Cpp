#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class Calculator{
public:
    void add(int a,int b){
        cout<<"The result of integer sum is : "<<a+b<<endl;
    }
    void add(float a,float b){
        cout<<"The result of float sum is : "<<a+b<<endl;
    }
    void add(string a,string b){
        cout<<"The result of string sum is : "<<(a+b)<<endl;
    }
};

int main(){
    Calculator c;
    c.add(4,5);
    c.add(2.5f,1.7f);
    c.add("Comp","Science");
    return 0;
}