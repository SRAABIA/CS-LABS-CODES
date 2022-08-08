#include<iostream>
using namespace std;
class Shape{
    int length, width, area;
    public:
    Shape(){}
    Shape(int x,int y){ length = x; width = y;}    
    int Area(){ area = length*width; return area; }
    Shape operator+(Shape & obj){
        Shape temp;
        temp.area = area + obj.area;
        return temp;
    }
    int get_a(){ return area;}
};
int main(){
    int a,b,c,d;
    cout<<"\nBox 1: \nEnter length: "; cin>>a;
    cout<<"\nEnter width: "; cin>>b;
    Shape shape1(a,b);
    cout<<"\nBox 2: \nEnter length: "; cin>>c;
    cout<<"\nEnter width: "; cin>>d;
    Shape shape2(c,d);
    cout<<"\nShape1.Area():  "<<shape1.Area();
    cout<<"\nShape1.Area():  "<<shape2.Area();
    Shape total = (shape1 + shape2);
    cout<<"\nTotal:\t\t"<<total.get_a();
    
}