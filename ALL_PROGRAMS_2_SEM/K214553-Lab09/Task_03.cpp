#include<iostream>
using namespace std;
class Person{
    protected:
	float money;
    int add;
	public:
    Person(){

    }
    Person(int y,int add):add(add){
        money = y;
    }
    virtual void get_data(){
        cout<<"Enter Account Balance: ";
        cin>>money;
        cout<<"Enter Bonus: ";
        cin>>add;
        
     }
    virtual float calc_bonus(){
        return (money+add);
    }
    virtual void display_data(){ 
        cout<<endl<<"Account Balance: "<<money;
        cout<<"Incremented Amount: "<<calc_bonus();
    }
   
		
		
};
class Admin:virtual public Person{
    protected:
	int admin_id;
    public:
    Admin(){
    }
    Admin(int id,int a,int b):Person(a,b){
        admin_id = id;
    }
    void get_data(){
        cout<<endl<<"Enter Admin ID: ";
        cin>>admin_id;
         cout<<endl<<"Enter Money in Account: ";
        cin>>money;
        cout<<endl<<"Enter the Bonus you want to add: ";
        cin>>add;
    }
    float calc_bonus(){
        return (money+add);
    }

    void display_data(){
        cout<<endl<<endl<<"\tIn Admins Class: ";
        cout<<endl<<"Admin ID: "<<admin_id;
        cout<<endl<<"Account Balance(old): "<<money;
        cout<<endl<<"Incremented Account Balance: "<<calc_bonus();
    }
    
};
class Account:virtual public Person{
    protected:
	int acc_num;
    public:
    Account(){

    }
    Account(int j,int a,int b):Person(a,b){
        acc_num=j;
    }
    void get_data(){
        cout<<endl<<"Enter Account Number: ";
        cin>>acc_num;
        cout<<endl<<"Enter Money in Account: ";
        cin>>money;
        cout<<endl<<"Enter the Bonus you want to add: ";
        cin>>add;
    }
    float calc_bonus(){
        return (money+add);
	}
    void display_data(){
        cout<<endl<<endl<<"\tIn Accounts Class: ";
        cout<<endl<<endl<<"Account Number = "<<acc_num;
        cout<<endl<<"Previous Amount : "<<money;
        cout<<endl<<"Incremented Amount : "<< calc_bonus();
    }

};
class Master: public Account, public Admin{
	public:
    Master(){

    }
    Master(int h,int j,int k, int l):Account(h,k,l),Admin(j,k,l),Person(k,l){

    }
    void get_data(){
        cout<<endl<<"Enter Account Number: ";
        cin>>acc_num;
        cout<<endl<<"Enter Admin id: ";
        cin>>admin_id;
        cout<<endl<<"Enter Money in Account: ";
        cin>>money;
        cout<<endl<<"Enter the Bonus you want to add: ";
        cin>>add;
    }
    float calc_bonus(){
        return (money+add);
    }
    void display_data(){
        cout<<endl<<endl<<"\tIn Masters Class: ";
        cout<<endl<<"Admin ID: "<<admin_id;
        cout<<endl<<"Account Number = "<<acc_num;
        cout<<endl<<"Previous Account Balance: "<<money;
        cout<<endl<<"Incremented Account Balance: "<<calc_bonus();

    }
};
int main(){
    Person *person;
    Master m; person=&m;
    person->get_data();
    person->display_data();
    cout<<endl<<"----------------------------------------------"<<endl;
    Account a;  person=&a;
    person->get_data();
    person->display_data();
    cout<<endl<<"----------------------------------------------"<<endl;
    Admin aj; person=&aj;
    person->get_data();
    person->display_data();
    cout<<endl<<"----------------------------------------------"<<endl;
    person = new Person();
    cout<<endl<<endl<<"\tIn Persons Class: ";
    person->get_data();
    person->display_data();
    cout<<endl<<"----------------------------------------------"<<endl;

}


