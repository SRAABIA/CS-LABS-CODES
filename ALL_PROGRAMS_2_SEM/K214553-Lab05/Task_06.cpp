#include<iostream>
#include<math.h>
#define PI 3.1427
using namespace std;

class Draw{
    private :
    float radius, base, side1, side2, angle;
    public:
    void setter_r(float r){   radius = r; }
    void setter_b(float b){   base = b;   }
    void setter_s1(float s1){ side1=s1; }
    void setter_s2(float s2){ side2=s2; }
    void setter_a(float an){ angle=an; }
    float getter_r(){  return radius ; }
    float getter_b(){  return base;   }
    float getter_s1(){ return side1; }
    float getter_s2(){ return side2; }
    float getter_a(){ return angle; }
    /*void input(){
    cout<<endl<<"Enter value for Rectangle side1: ";
    cin>>side1;
    cout<<endl<<"Enter value for Rectangle side2: ";
    cin>>side2;
    cout<<endl<<"Enter value for Radius: ";
    cin>>radius;
    cout<<endl<<"Enter value for Rhombus base: ";
    cin>>base;
    cout<<endl<<"Enter value for Rhombus angle: ";
    cin>>angle;
    }*/
    
};
class drawRectangle:public Draw{
    public:
    void input(){
        float a,b;
    cout<<endl<<"Enter value for Rectangle side1: ";
    cin>>a;
    setter_s1(a);
    cout<<endl<<"Enter value for Rectangle side2: ";
    cin>>b;
    setter_s2(b);
    }
    float finding_area(void){
        float a = getter_s1();
        float y = getter_s2();
        return a*y;
    }
};
class drawCircle:public Draw{
    public:
    void input(){
        int a;
        cout<<endl<<"Enter value for Radius: ";
        cin>>a;
        setter_r(a);
    }
    float finding_area(void){
        float c = getter_r();
        float y = PI * pow(c,2);
        return y;
    }
};
class drawRhombus:public Draw{
    public:
    void input(){
        int a,b;
        cout<<endl<<"Enter value of base for Rhombus: "; cin>>b;
        cout<<endl<<"Enter value of angle for Rhombus: "; cin>>a;
        setter_a(a);
        setter_b(b);
    }
    float finding_area(void){
        float b = getter_b();
        float a = getter_a();
        float g = pow(b,2);
        return (g*sin(a));
    } 
};
int main(){
    Draw draw;
    drawRectangle drawRectangle;
    drawCircle drawCircle;
    drawRhombus drawRhombus;
    drawRectangle.input();
    drawCircle.input();
    drawRhombus.input();
    cout<<endl<<"Area of Rectangle is:    "<<drawRectangle.finding_area();
    cout<<endl<<"Area of Circle is:       "<<drawCircle.finding_area();
    cout<<endl<<"Area of Rhombus is:      "<<drawRhombus.finding_area();
}