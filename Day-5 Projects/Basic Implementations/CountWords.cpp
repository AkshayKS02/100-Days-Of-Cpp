#include<iostream>
#include<map>
using namespace std;

int main(){
    map<char,int> CharCounter;
    string sentence;
    cout<<"Enter a sentence : ";
    getline(cin,sentence);
    for(int i=0;i<sentence.size();i++){
        CharCounter[sentence[i]]++;
    }
    cout<<"The Frequency of Characters is : "<<endl;
    for(const auto& Count:CharCounter){
        cout<<Count.first<<" -> "<<Count.second<<endl;
    }
    return 0;
}