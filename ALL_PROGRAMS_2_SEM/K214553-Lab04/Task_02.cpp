#include<iostream>
#include<conio.h>
#define pi 3.1427
using namespace std;
class Account{
    double accout_balance;
    public:
    Account(){
        accout_balance = 0;
    }
    void add(float nest){
        accout_balance += nest;
          cout<<"Your amount has been added succesfully!! ";
          getch();
          	system("cls");
    }
    void debit(float minus){
        accout_balance -= minus;
        cout<<"Your amount has been withdrawn succesfully!! ";
        getch();
          	system("cls");
    }
    double get_balance(void){
    
        return accout_balance;
        
    }
};
int main(){
    Account member;
    int choice;
    double amount,money;
    while(1){
    
    cout<<endl<<"1) Credit money into the accout "<<endl<<"2) Withdraw money from the account"<<endl<<"3) Check current balance"<<endl<<"4) Exit."<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    
	
    switch(choice){
        case 1:
        system("cls");
        cout<<"Enter the amount you'd like to add: ";
        cin>>amount;
        member.add(amount);
        break;
        case 2:
        system("cls");
        cout<<"Enter the amount you'd like to withdraw: ";
        cin>>money;
        member.debit(money);
        break;
        case 3:
        system("cls");
        cout<<"Your current balance is : "<<member.get_balance();
        getch();
          	system("cls");
        break;
        case 4:
        exit(1);

    }
}
}