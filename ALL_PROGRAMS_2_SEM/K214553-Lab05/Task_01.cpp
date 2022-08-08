#include<iostream>
using namespace std;
class Pair{
    public:
    int a, b;
    Pair();
    int sum();
};
Pair :: Pair(){
    a=10; b=9;
}
int Pair :: sum(){  return a+b; }
int main(){
    Pair obj;
    cout<<"Enter a: "; cin>>obj.a;
    cout<<"Enter b: "; cin>>obj.b;
    cout<<"The sum is: "<<obj.sum();  
}