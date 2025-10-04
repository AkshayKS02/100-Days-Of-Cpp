#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<numeric>
using namespace std;

int main(){
    vector<double> GPA;
    int n;
    double ele;
    cout<<"Enter number of students : ";
    cin>>n;
    cout<<"Enter GPA scored by "<<n<<" Students : "<<endl;
    for(int i=0;i<n;i++){
        cin>>ele;
        GPA.push_back(ele);
    }
    double sum=accumulate(GPA.begin(),GPA.end(),0.0);
    double avg=sum/n;
    double max_GPA=*max_element(GPA.begin(),GPA.end());
    double min_GPA=*min_element(GPA.begin(),GPA.end());
    sort(GPA.begin(),GPA.end());
    cout<<fixed<<setprecision(3);
    cout<<"The sum of all the GPA's is : "<<sum<<endl;
    cout<<"The average of all the GPA's is : "<<avg<<endl;
    cout<<"The Maximum GPA  : "<<max_GPA<<endl;
    cout<<"The Minimum GPA  : "<<min_GPA<<endl;
    cout<<"The GPA in sorted order is : ";
    for(auto it : GPA){
        cout<<it<<" ";
    }
    return 0;
}