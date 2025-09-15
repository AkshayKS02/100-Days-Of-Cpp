#include<bits/stdc++.h>
#define MAX 20
using namespace std;

template <typename T>
class Stack{
private:
    T a[MAX];
    int top;
public:
    Stack():top(-1){}
    
    void Push(T ele){
        if(top==MAX-1)
            throw "Stack is Full";
        top++;
        a[top]=ele;
        cout<<ele<<" is pushed into the stack "<<endl;
    }

    T Pop(){
        if(top==-1)
            throw "Stack is empty";
        return a[top--];
    }

    T Top(){
        if(top==-1)
            throw "Stack is empty";
        return a[top];
    }

    bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }

    bool isFull(){
        if(top==MAX-1)
            return true;
        else
            return false;
    }
};


int main(){
    try{
        Stack<int> intStack;
        intStack.Push(25);
        intStack.Push(54);
        intStack.Push(72);
        intStack.Push(97);
        if(intStack.isFull()){
            cout<<"The stack is Full"<<endl;
        }
        else cout<<"The stack is not Full"<<endl;
        cout<<"The element "<<intStack.Pop()<<" Was removed"<<endl;
        cout<<"The element "<<intStack.Pop()<<" Was removed"<<endl;
        cout<<"The element "<<intStack.Pop()<<" Was removed"<<endl;
        cout<<"The element at the top is : "<<intStack.Top()<<endl;
        if(intStack.isEmpty()){
            cout<<"The stack is empty"<<endl;
        }
        else cout<<"The stack is not empty"<<endl;

        Stack<char> CharStack;
        CharStack.Push('a');
        CharStack.Push('@');
        CharStack.Push('z');
        CharStack.Push('p');
        CharStack.Push('m');
        if(CharStack.isFull()){
            cout<<"The stack is Full"<<endl;
        }
        else cout<<"The stack is not Full"<<endl;
        cout<<"The element "<<CharStack.Pop()<<" Was removed"<<endl;
        cout<<"The element "<<CharStack.Pop()<<" Was removed"<<endl;
        cout<<"The element "<<CharStack.Pop()<<" Was removed"<<endl;
        cout<<"The element at the top is : "<<CharStack.Top()<<endl;
        cout<<"The element "<<CharStack.Pop()<<" Was removed"<<endl;
        cout<<"The element "<<CharStack.Pop()<<" Was removed"<<endl;
        if(CharStack.isEmpty()){
            cout<<"The stack is empty "<<endl;
        }
        else cout<<"The stack is not empty"<<endl;

        CharStack.Pop();

        
    }
    catch(const char* e){
        cout<<"Exception occured : "<<e<<endl;
    }
    return 0;
}