#include<iostream>
using namespace std;
class student{
    int id;
    string name;
    public:
    void input_info(){
        cout<<endl<<"Enter Student's Name: "; fflush(stdin); getline(cin,name);
        cout<<endl<<"Enter Student's ID: "; cin>>id;
    }
    void getStudentDetails(){
        cout<<endl<<"\tStudent's Name: "<<name<<endl<<"\tStudent's ID: "<<id;
    }
};
class marks: public student {
    protected:
    int marks_oop, marks_pf, marks_ds, marks_db;
    // string a[4]={"marks_oop", "marks_pf", "marks_ds", "marks_db"};
    public:
    void enter_marks(){
            cout<<endl<<"Enter marks for OOP (out of 100): ";   cin>>marks_oop;
            cout<<endl<<"Enter marks for PF (out of 100): ";    cin>>marks_pf;
            cout<<endl<<"Enter marks for DS (out of 100): ";    cin>>marks_ds;
            cout<<endl<<"Enter marks for DB (out of 100): ";    cin>>marks_db;
    }
    void getMarks(){
            cout<<endl<<"\tMarks for OOP: "<<marks_oop;  
            cout<<endl<<"\tMarks for PF: "<<marks_pf;  
            cout<<endl<<"\tMarks for DS: "<<marks_ds;  
            cout<<endl<<"\tMarks for DB: "<<marks_db;  
    }
};
class result: public marks{
    protected:
    int total_marks;
    double avg_marks;
    public:
    void display(){
        total_marks = marks_oop + marks_pf + marks_ds + marks_db ;
        avg_marks = (float)total_marks /4;
        cout<<endl<<"\tTotal Marks: "<<total_marks;
        cout<<endl<<"\tAverage Marks: "<<avg_marks;
    }
};
int main(){
    result obj;
    obj.input_info(); obj.enter_marks();
    cout<<endl<<"########################################################";
    obj.getStudentDetails(); 
    obj.getMarks();
    obj.display();
    cout<<endl<<"########################################################";
}