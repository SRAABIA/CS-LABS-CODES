#include<iostream>
#include<math.h>
#define pi 3.1427
using namespace std;
class Circle{
    float radius, perimeter;
    public:
    Circle(float r){
        radius=r;
    }
    float getarea(){
    	 float x= pow(radius,2);
        return x*pi;
    }
    float getPerimeter(){
        perimeter=(2*pi*radius);
        return perimeter;
    }
};
int main(){
    float c;
    cout<<"Enter The radius of the circle: ";
    cin>>c;
    Circle rad(c);
    cout<<endl<<"Area of a circle: "<<rad.getarea();
    cout<<endl<<"Perimeter of a circle: "<< rad.getPerimeter();

}