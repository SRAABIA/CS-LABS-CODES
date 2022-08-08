#include<iostream>
#include<string.h>
using namespace std;
template <class T> 
class Generic{
    T a;
    T b;
    public:
    Generic(){

    }
    T concatenate( ){
    cout<<"\nEnter value for a: "; fflush(stdin); cin>>a;
    cout<<"\nEnter value for b: "; fflush(stdin); cin>>b;
    return a+b;
    }
};
int main(){
    Generic<string> obj; //Typecasting into string to concatenate numbers
    cout<<endl<<"Your result is: "<<obj.concatenate();
}