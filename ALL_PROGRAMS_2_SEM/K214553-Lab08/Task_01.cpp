#include<iostream>
using namespace std;
class Op{
    int number;
    public:
    Op(){

    }
    Op(int y){
        number=y;
    }
    int get_num(){ return number; }
    Op operator++(){  //Pre-Increment
       number *= 4;
    }
    friend Op operator ++(Op&,int);
};
Op operator ++(Op& obj,int){ //Post-Increment
    obj.number /= 4; return obj;
}
int main(){
    int a;
    cout<<"\nEnter any integer: "; cin>>a;
    Op obj(a);
    ++obj;
    cout<<"\nPre-Increment: "<<obj.get_num();
    obj++;
    cout<<"\nPost-Increment: "<<obj.get_num();
}