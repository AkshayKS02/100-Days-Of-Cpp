#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

int main(){
    map<int,vector<string>> Records;
    int n;
    
    cout<<"Enter number of Students : ";
    cin>>n;

    for(int i=0;i<n;i++){
        int rno,NoSub;
        cout<<"Enter the student roll And The number of Subjects Enrolled : "<<endl;
        cin>>rno>>NoSub;
        cout<<"Enter "<<NoSub<<" Subjects : "<<endl;
        for(int j=0;j<NoSub;j++){
            string subject;
            cin>>subject;
            Records[rno].push_back(subject);
        }
    }

    cout<<"The Group Record is : "<<endl;
    for(const auto& Student:Records){
        cout<<Student.first<<" -> ";
        for(const auto& subject : Student.second){
            cout << subject << " ";
        }
        cout<<endl;
    }
    return 0;
}