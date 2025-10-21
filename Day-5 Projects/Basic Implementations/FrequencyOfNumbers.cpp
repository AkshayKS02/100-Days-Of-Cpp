#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int> FrequencyCounter;
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements: "<<endl;
    while(n--){
        int ele;
        cin>>ele;
        FrequencyCounter[ele]++;
    }
    cout<<"The Frequency of Elements entered is : "<<endl;
    for(const auto& count:FrequencyCounter){
        cout<<count.first<<" -> "<<count.second<<endl;
    }
    return 0;
}