#include<iostream>      //DEMONSTRATION OF CONSTANT QUALIFIER
using namespace std;
class student{
    mutable int id;
    const int age;
    float gpa;
    public:
    student();
    // student(): id(4553),age(18),gpa(3.4){
    //     //can't write age = 18 as assignment operator cannot be used with const variables
    // }
    student(int,int,float);
    void set_id(int)const;
    int get_id()const;
    void set_age(int);
    int get_age();
    float get_gpa();
};

student ::  student () : id(4553),age(18),gpa(3.4){   //can't write age = 18 as assignment operator cannot be used with const variables 
    }
student ::  student (int id,int age, float gpa):id(id),age(age),gpa(gpa){   }
void student :: set_age(int m){
        // age = m;
        /*cannot use assignment operator with constant variable
        A constant value can only be set through constructor
        and once set it can never be changed*/
}
void student ::set_id(int m)const{
        id=m;
        /*Since this function is constant
        it cannot access id if id is not written with mutable keyword
        for eg:
        gpa = m ; will give the error that gpa is only read-only object;*/
}
    int student     :: get_id()const    { return id; }
    int student     :: get_age()        { return age; }
    float student   :: get_gpa()        { return gpa;}
int main(){
    student std;    
    cout<<endl<<"Using Default Constructor: ";
    cout<<endl<<"ID: "<<std.get_id()<<endl<<"Age: "<<std.get_age()<<endl<<"Gpa: "<<std.get_gpa();

    cout<<endl<<endl<<"Using Parameterized Constructor when we have a const data member: ";
    student std1(3333,19,4);
    cout<<endl<<"ID: "<<std1.get_id()<<endl<<"Age: "<<std1.get_age()<<endl<<"Gpa: "<<std1.get_gpa();

    const student std2; /*now its  data members caanot be changed throughout the life of this object
    means i caanot use setter to change the value of non-constant data member eg: gpa.
    also,
    only constant data members and functions can be accessed through a constant object
    for that a function needs to be constant
    */
    //    std2.get_age();
    /* gives error as get_age is not a constant function
    */
   std2.set_id(9);
   cout<<endl<<endl<<"Getting ID by using a const class object & USING constant mutator and accessor:";
   cout<<endl<<"ID: "<<std2.get_id();
}



