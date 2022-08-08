#include<iostream>
using namespace std;
template <class T>
class Calculator{
    private:
    T num1, num2;
    public:
    Calculator(T n1,T n2){
        num1 = n1;
        num2 = n2;
    }
    void displayR(){
        cout<<"Num: "<<num1<<" and "<<num2<<". "<<endl;
        cout<<num1<<" + "<<num2<<" = "<<add()<<endl;
        cout<<num1<<" - "<<num2<<" = "<<sub()<<endl;
        cout<<num1<<" * "<<num2<<" = "<<multiply()<<endl;
        cout<<num1<<" / "<<num2<<" = "<<divide()<<endl;

    }
    T add(){ return num1+num2; }
    T sub(){ return num1-num2; }
    T multiply(){ return num1*num2; }
    T divide(){ return num1/num2; }

};
int main(){
    Calculator <int>intcal(2,1);
    Calculator<float>floatcal(2.4,1.2);
    cout<<"Int Result: "<<endl;
    intcal.displayR();
    cout<<"float result: "<<endl;
    floatcal.displayR();
}