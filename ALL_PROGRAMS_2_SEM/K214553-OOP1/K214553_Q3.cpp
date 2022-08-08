#include<iostream>
using namespace std;
class SavingAccount{
    private:
    float saving_balance ;
    public:
    SavingAccount(int);
    static float annual_interest_rate;
    float monthly_interest = 0;
    void input();
    float getter_saving_balance();
    float calculate_Monthly_Interest();
    static void modify_interest_rate();
    ~SavingAccount(){}
};
SavingAccount :: SavingAccount(int y){
    saving_balance = y;
}
float SavingAccount :: annual_interest_rate = 0.03 ;
void SavingAccount :: input(){

}
float SavingAccount :: getter_saving_balance(){
    return saving_balance;
}
float SavingAccount :: calculate_Monthly_Interest(){
    monthly_interest = (float)saving_balance * (annual_interest_rate/12);
    // cout<<monthly_interest;
    saving_balance += monthly_interest;
    return monthly_interest;
}
void SavingAccount :: modify_interest_rate(){
    annual_interest_rate = 0.04;
}
int main(){
    SavingAccount saver1(2000.0),saver2(3000.0);
    cout<<endl<<endl<<"-------------------------------------------------------------";
    cout<<endl<<endl<<"                 SAVER 1"<<endl;
    cout<<endl<<"       Saver 1's Monthly Interest is: "<<saver1.calculate_Monthly_Interest();
    cout<<endl<<"       Saver 1's Monthly Savings are: "<<saver1.getter_saving_balance();
    cout<<endl<<endl<<"                 SAVER 2"<<endl;
    cout<<endl<<"       Saver 2's Monthly Interest is: "<<saver2.calculate_Monthly_Interest();
    cout<<endl<<"       Saver 2's Monthly Savings are: "<<saver2.getter_saving_balance();
    cout<<endl<<endl<<"-------------------------------------------------------------"<<endl;
    cout<<"           After Increment In Interest Rate";
    cout<<endl<<endl<<"-------------------------------------------------------------"<<endl;
    SavingAccount :: modify_interest_rate;
    cout<<endl<<endl<<"                 SAVER 1"<<endl;
    cout<<endl<<"       Saver 1's Monthly Interest is: "<<saver1.calculate_Monthly_Interest();
    cout<<endl<<"       Saver 1's Monthly Savings are: "<<saver1.getter_saving_balance();
    cout<<endl<<endl<<"                 SAVER 2"<<endl;
    cout<<endl<<"       Saver 2's Monthly Interest is: "<<saver2.calculate_Monthly_Interest();
    cout<<endl<<"       Saver 2's Monthly Savings are: "<<saver2.getter_saving_balance()<<endl;
}
