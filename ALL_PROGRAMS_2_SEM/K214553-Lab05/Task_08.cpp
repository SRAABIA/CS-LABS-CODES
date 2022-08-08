#include<iostream>
using namespace std;
class Program{
    string name, gender;
    int age, std_id,crd_hr[8];
    float marks[8];
    public:
    Program(){
    }
    float sum=0,total_marks=0,numerator=0;
    
    void setter_name(string a){
        name = a;
    }
    void setter_gender(string a){
        gender = a;
    }
    void setter_age(int a){
        age = a;
    }
    void setter_std_id(int a){
        std_id = a;
    }
    string getter_name(){
     return   name;
    }
    string getter_gender(){
       return gender;
    }
    int getter_age(){
    return age;
    }
    int getter_std_id(){
       return std_id;
    }
    float Calculator(){
        float gpa= (float)numerator/sum;
        return gpa;
    }
    
    void input_info(){
    cout<<endl<<"------------------------------------------------------------";
    cout<<endl<<"Enter Your Name: "; getline(cin,name); 
    cout<<endl<<"Enter Your ID: "; cin>>std_id;
    cout<<endl<<"Enter Your Age: "; cin>>age;
    cout<<endl<<"Enter Your Gender: "; 
    fflush(stdin); 
    getline(cin,gender); 
    cout<<endl<<"------------------------------------------------------------";
    }
    void input(){
        int o;
        cout<<endl<<"How many subjects are there? ";
        cin>>o;
        for (int i=0;i<o;i++){
            cout<<endl<<"- Enter points for subject "<<i+1<<" :  ";
            cin>>marks[i];
            total_marks=marks[i];
            cout<<"Enter Credit hrs. : "; cin>> crd_hr[i];
            sum += crd_hr[i];
            numerator += (marks[i]*crd_hr[i]);
        }
    }
    void output(){
    cout<<endl<<"Your Name: "<<name; 
    cout<<endl<<"Your ID: "<<std_id;
    cout<<endl<<"Your Age: "<<age;
    cout<<endl<<"Your Gender: "<<gender; 
    }
};
int main(){
    Program flex;
    int sem,n;
    float cgpa=0; float gpa=0;    
    flex.input_info();
    while(n!=3){
    cout<<endl<<"------------------------------------------------------------"<<endl<<"Select:"<<endl<<"1- GPA"<<endl<<"2- CGPA"<<endl<<"3- Exit"<<endl<<"------------------------------------------------------------"<<endl;
    cin>>n;
    switch(n){
        case 1:
        flex.input();
        cout<<endl<<"------------- Your GPA: "<<flex.Calculator()<<"  -------------"<<endl;
        break;

        case 2:
        cout<<"Enter how many semesters are there: ";
        cin>>sem;
            for(int i=0;i<sem;i++){
            cout<<endl<<"SEMESTER "<<i+1;
            flex.input();
            gpa+=flex.Calculator();
            }
        cgpa += (gpa/sem);
        flex.output();
        cout<<endl<<"------------- Your GPA: "<<flex.Calculator()<<"  -------------"<<endl;
        cout<<endl<<"------------- Your CGPA: "<<cgpa<<"  -------------"<<endl;
        break;

        case 3:
        exit(0);
        break;

        default:
        cout<<"Choose appropriate option"<<endl;
        break;
    }}
}