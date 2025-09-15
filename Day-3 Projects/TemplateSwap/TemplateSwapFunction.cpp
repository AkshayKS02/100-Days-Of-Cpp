#include<bits/stdc++.h>
using namespace std;

template <typename T>
void Swap(T* a,T* b){
    T temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=15,b=95;
    cout<<"Before Swapping : "<<a<<" "<<b<<endl;
    Swap(&a,&b);
    cout<<"After Swapping : "<<a<<" "<<b<<endl;
    float x=3.75f,y=9.87f;
    cout<<"Before Swapping : "<<x<<" "<<y<<endl;
    Swap(&x,&y);
    cout<<"After Swapping : "<<x<<" "<<y<<endl;
    char m='c',n='d';
    cout<<"Before Swapping : "<<m<<" "<<n<<endl;
    Swap(&m,&n);
    cout<<"After Swapping : "<<m<<" "<<n<<endl;
}