#include<iostream>
using namespace std;
class Account{
    private:
    int account_no , account_bal , security_code;
    public:
    Account();
    void setter_security_code(int);
    void setter_account_bal(int);
    void setter_account_no(int);
    void print();
};
Account :: Account(){ }
void Account :: setter_security_code(int a){
    this -> security_code = a;
}
void Account :: setter_account_bal(int a){
    this -> account_bal = a;
}
void Account :: setter_account_no(int a){
    this -> account_no = a;
}
void Account :: print(){
    cout<<endl<<"====================Account Details===================="<<endl;
    cout<<endl<<"       Account Number  = "<<account_no;
    cout<<endl<<"       Account Balance = "<<account_bal;
    cout<<endl<<"       Security Code   = "<<security_code;
    cout<<endl<<"======================================================="<<endl;
    
}
int main(){
    int a,b,c;
    Account M;
    cout<<endl<<"Enter Account Number = ";
    cin>>a;
    M.setter_account_no(a);
    cout<<endl<<"Enter Account Balance = ";
    cin>>b;
    M.setter_account_bal(b);
    cout<<endl<<"Enter Security Code = ";
    cin>>c;
    M.setter_security_code(c);
    M.print();
}