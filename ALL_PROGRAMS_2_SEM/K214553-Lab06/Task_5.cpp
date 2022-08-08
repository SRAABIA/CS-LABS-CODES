/*                                       HYBRID INHERITANCE BASED PROGRAM            
                                    COMBINATION OF MULTIPLE AND HIERARCHICAL INHERITANCE                                       */
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
int n=1;    
class stud{
    protected:
    string *name;
    int id;
    static int *marks_hci;
    static int *marks_oop;
    static int *marks_dld;
    static int total_hci ;
    static int total_oop ;
    static int total_dld ;
    public:
    stud(){
        name      = new string[n];
        marks_hci = new int[n];
        marks_oop = new int[n];
        marks_dld = new int[n];
    }
    void input(int i){
        cout<<"ENTER NAME: "; fflush(stdin);
        getline(cin,name[i]);
    }
    void display(int j){
        cout<<endl<<"----------------------------------------------------";
                    srand(time(0));
        cout<<endl<<"\tSTUDENT NO."<<j+1; 
        cout<<endl<<"\tNAME: "<<name[j];
        cout<<endl<<"\tID: K21-"<<rand() % 9999 + 1000 + (j+1);
        cout<<endl<<"\tHCI: "<<marks_hci[j];
        cout<<endl<<"\tOOP: "<<marks_oop[j];
        cout<<endl<<"\tDLD: "<<marks_dld[j];
    }
    ~stud(){
        delete marks_dld; delete marks_oop; delete marks_hci; delete name; 
    }
};
int* stud ::marks_hci=0;
int* stud ::marks_oop=0;
int* stud ::marks_dld=0;
int stud :: total_hci = 0;
int stud :: total_oop = 0;
int stud :: total_dld = 0;
class hci : public stud{        //SINGLE INHERITANCE
    public:
    void hcw(int i){
        cout<<"ENTER MARKS FOR HCI: ";
        cin>>marks_hci[i];
    }
};
class oop : public stud{        //SINGLE INHERITANCE
    public:
    void ooop(int i){
        cout<<"ENTER MARKS FOR OOP: ";
        cin>>marks_oop[i];
    }
};
class dld : public stud{        //SINGLE INHERITANCE
    public: 
    void dldd(int i){
        cout<<"ENTER MARKS FOR DLD: ";
        cin>>marks_dld[i];
    }
};
class PercentagePerSubject : public dld,public hci, public oop{        //MULTIPLE INHERITANCE
    float avg_d=0 , avg_o=0 , avg_h=0;
    public:
    void calculate(){
        for(int i=0;i<n;i++){
            total_hci += marks_hci[i];
            avg_h = (float)total_hci/n;
            total_dld += marks_dld[i];
            avg_d = (float)total_dld/n;
            total_oop += marks_oop[i];
            avg_o = (float)total_oop/n;
        }   
        cout<<endl<<"****TOTAL MARKS OBT.****"<<endl<<"\tHCI: "<<total_hci<<endl<<"\tOOP: "<<total_oop<<endl<<"\tDLD: "<<total_dld<<endl;
        cout<<endl<<"****PERCENTAGE OF EACH SUBJECT****"<<endl<<"\tHCI: "<<avg_h<<endl<<"\tOOP: "<<avg_o<<endl<<"\tDLD: "<<avg_d;
    }
};
int main(){
    cout<<"HOW MANY STUDENTS ARE THERE: "; cin >> n;
    PercentagePerSubject h;
    stud o;
    for(int i=0 ; i<n ; i++){
        cout<<endl<<"\tStudent NO."<<i+1<<endl;
        o.input(i);
        h.hcw(i);
        h.ooop(i);
        h.dldd(i);
    }
    h.calculate();
    cout<<endl<<endl<<endl;
    for(int j=0;j<n;j++){
      o.display(j);  
    }   
}