#include<iostream>
using namespace std;
class Person{
    protected:
    int employee_id;
    public:
    void getData(){
        cout<<"\nEnter your id: "; cin>>employee_id;
    }
    void displayData(){
        cout<<"\nYour ID: "<<employee_id;
    }

};
class Admin : public Person{
    string name;
    double income;
    float boonus;
    public:
    void getData(){
        cout<<"\nAdmin please enter your name: "; fflush(stdin); getline(cin,name);
        cout<<"\nAdmin please enter your monthly income: "; cin>> income;
    }
    float bonus(){
        boonus = income*12*0.05;  
		return boonus;
    }
    void displayData(){
        cout<<"\nAdmin ID: "<<employee_id;
        cout<<"\nAdmin Name: "<<name;
        cout<<"\nAdmin Salary: "<<income;
        cout<<"\nAdmin Bonus: "<<bonus();

    }
};
class Accounts : public Person{
    string name;
    double income;
    float boonus;
    public:
    void getData(){
        cout<<"\nAccountant please enter your name: "; fflush(stdin); getline(cin,name);
        cout<<"\nAccountant please enter your monthly income: "; cin>> income;
    }
    float bonus(){
        boonus = income *12*0.05;
		return boonus;
    }
    void displayData(){
        cout<<"\nAccountant ID: "<<employee_id;
        cout<<"\nAccountant Name: "<<name;
        cout<<"\nAccountant Salary: "<<income;
        cout<<"\nAccountant Bonus: "<<bonus();

    }
};

int main(){
    Admin admin;
    admin.Person::getData();
    admin.getData();
    admin.displayData();
	Accounts accounts;
	accounts.Person::getData();
	accounts.getData();
	accounts.displayData();

	return 0;
}