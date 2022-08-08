#include<iostream>
using namespace std;
class Account{
    protected:
    double account_balance;
    public:
    Account(){  }
    Account(double initial_balance){
        if(initial_balance >= 0.0)
        account_balance = initial_balance;
        else {
        account_balance = 0.0;
        cout<<endl<<"\tThe initial balance was invalid";
        }
    }
    void credit(double amount){
        account_balance += amount;
    }
    bool debit(double debit_amount){
        if(debit_amount < account_balance){
        account_balance -= debit_amount;
        return true;}
        else {
        cout<<endl<<"\tDebit Amount Exceeded Account Balance";
        return false; 
        }
    }
    void getBalance(){
        cout<<endl<<"\tYour current Balance is: "<<account_balance<<endl;
    }
};
class SavingsAccount :public Account{
    protected:
    double percent_interest_rate;
    public:
    SavingsAccount(double initial_balance, double interest_rate):percent_interest_rate(interest_rate), Account(initial_balance){

    }
    double CalculateInterest(){
        double interest;
        interest = (double)percent_interest_rate * account_balance;
        return interest;
    }
};
class CheckingAccount : public Account{
    protected:
    double fee_charged_per_transaction;
    public:
    CheckingAccount(double initial_balance, double fee_amount):fee_charged_per_transaction(fee_amount), Account(initial_balance){
        
    }
    void credit(double amount){
        Account::credit(amount);
        account_balance -= fee_charged_per_transaction;

    }
   void debit(double debit_amount){
        if(Account::debit(debit_amount) == true){
            account_balance -= fee_charged_per_transaction;
        }
    }
};
int main(){
    double credit, debit, interest,initial,returned_interest,fee;
    cout<<endl<<"================================================\n";
    cout<<endl<<"\t\tAccounts Class\n";
    cout<<endl<<"\tEnter the initial balance of your account: "; cin>>initial;
    Account Account(initial);
    cout<<endl<<"\tEnter the amount you want to ADD in your account: "; cin>>credit;
    Account.credit(credit);
    Account.getBalance();
    cout<<endl<<"\tEnter the amount you want to WITHDRAW in your account: "; cin>>debit;
    Account.debit(debit);
    Account.getBalance();
    cout<<endl<<"================================================\n";
    cout<<endl<<"\t\tSavingAccounts Class\n";
    cout<<endl<<"\tEnter the initial balance of your account: "; cin>>initial;
    cout<<endl<<"\tEnter the Rate Of Interest: "; cin>>interest;
    SavingsAccount SavingsAccount(initial,interest);
    returned_interest = SavingsAccount.CalculateInterest();
    SavingsAccount.credit(returned_interest);
    cout<<endl<<"\tAccount Balance after Adding Interest";  SavingsAccount.getBalance();
    cout<<endl<<"\tEnter the amount you want to WITHDRAW in your account: "; cin>>debit;
    SavingsAccount.debit(debit);
    SavingsAccount.getBalance();
    cout<<endl<<"================================================\n";
    cout<<endl<<"\t\tCheckingAccounts Class\n";
    cout<<endl<<"\tEnter the initial balance of your account: "; cin>>initial;
    cout<<endl<<"\tEnter the Fee per Transaction: "; cin>>fee;
    CheckingAccount CheckingAccount(initial,fee);
    CheckingAccount.getBalance();
    cout<<endl<<"\tFee will be deducted on each transaction\n";
    cout<<endl<<"\tEnter the amount you want to ADD in your account: "; cin>>credit;
    CheckingAccount.credit(credit);
    CheckingAccount.getBalance();
    cout<<endl<<"\tFee will be deducted on each transaction\n";
    cout<<endl<<"\tEnter the amount you want to WITHDRAW in your account: "; cin>>debit;
    CheckingAccount.debit(debit);
    CheckingAccount.getBalance();
}