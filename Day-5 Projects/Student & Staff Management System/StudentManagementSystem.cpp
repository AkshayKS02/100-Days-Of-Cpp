#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<string>
#include<exception>
#include<stdlib.h>
using namespace std;


class PersonException:public runtime_error{
    public:
        PersonException(const string& msg):runtime_error(msg){}
};

class Person{
    protected: string name;
               int age;
    public: virtual void display() const=0;

            friend ostream& operator<<(ostream&,const Person& );
        
            void getDetails(){

                cout<<"Enter name of the person : ";
                getline(cin>>ws,name);//was trying to use cin which stops after space , learnt cin>>ws
                if(name.empty())//was using name=="" condition causes errors in some edge cases
                    throw PersonException("Name cannot be Empty");

            
                cout<<"Enter his age : ";
                cin>>age;
                if(age<=0){
                    throw PersonException("Age Cannot be negative");
                }
            }

            void printPerson() const{
                cout<<*this;
            }
};

ostream& operator<<(ostream& COUT,const Person& P){
    COUT<<"Name : "<<P.name<<endl;
    COUT<<"Age : "<<P.age<<endl;
    return COUT;
}

class Student:public Person{
    private: int rno;
             set<string> EnrolledSubjects;
             map<string,string> Grade;
             
    public: 
            static set<int> RollNumbers;
            static map<int,Student*> ValidStudents;

            void StudentDetails(){
                int NoSub;
                getDetails();


                cout<<"Enter his Roll No : ";
                cin>>rno;
                if(CheckRoll(rno)){
                    RollNumbers.insert(rno);
                    ValidStudents[rno]=this;
                    //storing whole object causes slicing in polymorphic hierarchy hence changed to storing address
                }
                else
                    throw PersonException("Two Roll No's can't be repeated");
                
                cout<<"Enter The Number of Subjects Enrolled : ";
                cin>>NoSub;
                for(int i=0;i<NoSub;i++){
                    int marks;
                    string subject;
                    cout<<"Enter the subject and marks scored : ";
                    cin>>subject>>marks;
                    AddSubjects(subject,marks);
                }
                
            }

            void display() const override{
                printPerson();
                cout<<"Roll No : "<<rno<<endl;
                cout<<"Student Performance : "<<endl;
                for(const auto& sp:Grade){
                    cout<<sp.first<<" -> "<<sp.second;
                    cout<<endl;
                }
            }
            
            static bool CheckRoll(int roll){
                return (RollNumbers.find(roll)==RollNumbers.end());//this method is faster than if else block and saves space 
                
            }


            const string gradePoint(int marks){
                if(marks>=90) return "A+";
                if(marks>=80) return "A";
                if(marks>=70) return "B+";
                if(marks>=60) return "B";
                if(marks>=50) return "C+";
                if(marks>=40) return "C";
                if(marks>=35) return "D+";
                if(marks>=30) return "D";
                return "F";
            }

            void AddSubjects(const string& sub,int marks){
                if(EnrolledSubjects.find(sub)!=EnrolledSubjects.end())//was trying to use Duplicate tracker code , this is faster
                    throw PersonException("Single Student can't Enroll in Same Subject twice");
                else {
                    EnrolledSubjects.insert(sub);
                    Grade[sub]=gradePoint(marks);
                }
            }  
};

set<int> Student::RollNumbers;
map<int,Student*> Student::ValidStudents;


class Staff: public Person{
    private: string employeeId;
             set<string> CoursesHandled;
             
    public: 
            static set<string> EmployeeIdentity;
            static map<string,Staff*> ValidStaff;

            void StaffDetails(){
                int NoCourse;
                getDetails();
                
                cout<<"Enter his Employee Id : ";
                cin>>employeeId;
                if(CheckEmpId(employeeId)){
                    EmployeeIdentity.insert(employeeId);
                    ValidStaff[employeeId]=this;
                }
                else
                    throw PersonException("Two Employees can't have the same id");

                cout<<"Enter the number of courses handled by him : ";
                cin>>NoCourse;
                for(int i=0;i<NoCourse;i++){
                    string subject;
                    cout<<"Enter the subject Handled : ";
                    getline(cin>>ws,subject);
                    AddCourse(subject);
                }

            }

            void display() const override{
                printPerson();
                cout<<"Employee Id : "<<employeeId<<endl;
                cout<<"The Courses Handled are : "<<endl;
                for(const auto& Course:CoursesHandled){
                    cout<<Course<<endl;
                }
            }
            
            static bool CheckEmpId(const string& id){
                return (EmployeeIdentity.find(id)==EmployeeIdentity.end());
            }

            void AddCourse(const string &sub){
                if(CoursesHandled.find(sub)!=CoursesHandled.end())
                    throw PersonException("A Staff Cant teach same subject twice");
                else{
                    CoursesHandled.insert(sub);
                }
            }

};

set<string> Staff::EmployeeIdentity;
map<string,Staff*> Staff::ValidStaff;


int main(){
    vector<Person*> people;//learnt this new technique of storing the objects without having them disapper 
    cout<<"Welcome to the Comprehensive Staff and Student Management System"<<endl;
    try{
        for(;;){
            int choice;
            cout<<"Enter the operation to perform : ";
            cout<<"\n1.Add a student\n2.Display a student \n3.Add a staff member\n4.Display a staff member\n(Any other key to exit) : ";
            cin>>choice;
            switch(choice){
                case 1:{ Student* s=new Student();
                        s->StudentDetails();
                        people.push_back(s);
                        break;}

                case 2: {int rno;
                        cout<<"Enter the roll no of the student to find : ";
                        cin>>rno;

                        auto itStudent=Student::ValidStudents.find(rno);
                        if(itStudent !=Student::ValidStudents.end()){
                            Student* s=(*itStudent).second;
                            s->display();
                        }
                        else throw PersonException("The Roll no doesnt exist ");

                        break;}

                case 3: {Staff* st=new Staff();
                        st->StaffDetails();
                        people.push_back(st);
                        break;}
            
                case 4:{ string empid;
                        cout<<"Enter the employeeId of the staff to find : ";
                        cin>>empid;

                        auto itStaff=Staff::ValidStaff.find(empid);
                        if(itStaff !=Staff::ValidStaff.end()){
                            Staff* s=(*itStaff).second;
                            s->display();
                        }
                        else throw PersonException("The EmpId doesnt exist ");

                        break;}

                default:cout<<"Exiting the program"<<endl;
                        exit(0);       
            }
        }
    }
    catch(const PersonException& e){
        cout<<"Error : "<<e.what()<<endl;
    }
    return 0;
}
