#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class Account{
    protected: int Balance_amt,TransacAmount;
               string AccountNumber;
               bool LastTransac=false;
    public: 
        Account(string accountNumber){
            AccountNumber=accountNumber;
            Balance_amt=0;
        }
        virtual void Deposit(int amt){
            Balance_amt+=amt;
            LastTransac=false;
            TransacAmount=amt;
        }
        virtual void Withdraw(int amt){
            if(Balance_amt>=amt){
                Balance_amt-=amt;
                LastTransac=true;
                TransacAmount=amt;
            }
            else 
                cout<<"Invalid Balance in the acc : "<<AccountNumber;
        }
        virtual void DisplayTransaction()=0;
};

class SavingsAccount:public Account{
public:
    SavingsAccount(string acc_no): Account(acc_no){}
    void Withdraw(int amt) override{
        if(Balance_amt>=amt && Balance_amt>=500){
            Balance_amt-=amt;
            TransacAmount=amt;
            LastTransac=true;
        }
        else 
            cout<<"Invalid Balance in the acc : "<<AccountNumber;
    }
    void DisplayTransaction() override{
        cout<<"Savings Account"<<endl;
        if(LastTransac==true){
            cout<<TransacAmount<<".Rs was withdrawn from Acc : "<<AccountNumber<<endl;
            cout<<"Current Balance : "<<Balance_amt<<endl;
        }
        else{
            cout<<TransacAmount<<".Rs was deposited into Acc : "<<AccountNumber<<endl;
            cout<<"Current Balance : "<<Balance_amt<<endl;
        }
    }
};

class CurrentAccount:public Account{
public:
    CurrentAccount(string acc_no): Account(acc_no){}
    void DisplayTransaction() override {
        cout<<"Current Account"<<endl;
        if(LastTransac==true){
            cout<<TransacAmount<<".Rs was withdrawn from Acc : "<<AccountNumber<<endl;
            cout<<"Current Balance : "<<Balance_amt<<endl;
        }
        else{
            cout<<TransacAmount<<".Rs was deposited into Acc : "<<AccountNumber<<endl;
            cout<<"Current Balance : "<<Balance_amt<<endl;
        }
    }
};

int main(){
    Account* a1=new SavingsAccount("845A961");
    a1->Deposit(12000);
    a1->DisplayTransaction();
    Account* a2=new CurrentAccount("986A315");
    a2->Deposit(45000);
    a2->Withdraw(25000);
    a2->DisplayTransaction();
    return 0;
}