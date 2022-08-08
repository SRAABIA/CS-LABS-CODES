#include<iostream>
using namespace std;
class printClass;
class perimeter{
    private: int length, breadth,meter;
    friend class printClass;
    public:
    perimeter(int x,int y):length(x),breadth(y){}
    void calc(){
        meter = 2*(length+breadth);
    }
};
class printClass{
    public:
    void display(perimeter&obj){
        cout<<"The perimeter of Rectangle : "<<obj.meter;
    }
};
int main(){
    int a,b;
    cout<<"\nEnter length: "; cin>>a;
    cout<<"\nEnter Breadth: "; cin>>b;
    perimeter p(a,b);
    p.calc();
    printClass kk;
    kk.display(p);
}