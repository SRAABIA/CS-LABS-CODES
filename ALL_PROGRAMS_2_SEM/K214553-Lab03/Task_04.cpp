#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{
    string first_name;
    string last_name;
    double monthly_salary;

    public:
    Employee() {
         this->first_name = "Syeda";
         this->last_name = "Raabia";
         this->monthly_salary = 12000;
    } // default constructor
    Employee(string first_name, string last_name, double monthly_salary)
    { 
          if(monthly_salary<0){        
          this->monthly_salary = 0.0f;
          }
          else
               this->monthly_salary= monthly_salary;              
               this->first_name = first_name;
               this->last_name = last_name;
    }
    void setter_first_name(string n)
    {
        first_name = n;
    }
    void setter_last_name(string n)
    {
        last_name = n;
    }
    void setter_monthly_salary(double f)
    {
        if (f < 0)
        {
            this->monthly_salary = 0.0f;
        }
        else
            this->monthly_salary = f;
    }
    string getter_first_name()
    {
        return first_name;
    }
    string getter_last_name()
    {
        return last_name;
    }
    double getter_monthly_salary()
    {
        return monthly_salary;
    }

    void input()
    {
        string name1, name2;
        double money;
        cout << endl << "Enter your First name: ";
        fflush(stdin);
        getline(cin, name1);
        setter_first_name(name1);
        cout << endl<< "Enter your Last name: ";
        fflush(stdin);
        getline(cin, name2);
        setter_last_name(name2);
        cout << endl<< "Monthly Salary: ";
        cin >> money;
        setter_monthly_salary(money);
    }
    void raise()
    {   float r;
        r= (monthly_salary * 0.1) ;
        double salary = (monthly_salary*12)+r;
        cout<<endl<<"Yearly Salary After 10% Raise: "<<salary;
    }
    double yearly_salary(double monthly_salary)
    {
        return monthly_salary * 12;
    }
    void display()
    {
        cout << "Name : " << getter_first_name() << " " << getter_last_name();
        cout << endl
             << "Monthly Salary: " << getter_monthly_salary();
        cout << endl
             << "Yearly Salary: " << yearly_salary(getter_monthly_salary());
           
    }
};
int main()
{
     cout << setprecision(1)<<fixed;
    Employee emp1, emp2, EmployeeTest("Syeda","Raabia",10000);
    cout << endl
         << "__________________________________";
         cout<<endl<<"demonstrate class Employee_s capabilities! "<<endl;
         EmployeeTest.display();
    cout << endl
         << "__________________________________";
    cout << endl
         << "Employee 1: " << endl;
    emp1.input();
    cout << endl
         << "__________________________________";
    cout << endl
         << "Employee 2: " << endl;
    emp2.input();
    cout << endl
         << "__________________________________";
    cout << endl
         << endl
         << "Employee 1: " << endl;
    emp1.display();
    cout << endl
         << "__________________________________";
    cout << endl
         << endl
         << "Employee 2: " << endl;
    emp2.display();
    cout << endl
         << "__________________________________";
    cout << endl
         << endl
         << "--Yearly Salary After Increment--";
    cout << endl
         << "__________________________________";
    cout << endl
         << endl
         << "Employee 1: " << endl<<endl;
    
    emp1.display();
    emp1.raise();
    cout << endl
         << "__________________________________";
    cout << endl
         << endl
         << "Employee 2: " << endl<<endl;
    emp2.display();
    emp2.raise();
    cout << endl
         << "__________________________________";
}