#include<iostream>
#include<set>
using namespace std;

int main(){
    int test_case;
    set<int> SortedNum;
    cout<<"Enter Number Of Testcases : ";
    cin>>test_case;
    cout<<"Enter "<<test_case<<" Numbers : "<<endl;
    while(test_case--){
        int num;
        cin>>num;
        SortedNum.insert(num);
    }
    cout<<"The Numbers in Sorted Order is : "<<endl;
    for(int num:SortedNum){
        cout<<num<<" ";
    }
    return 0;
}