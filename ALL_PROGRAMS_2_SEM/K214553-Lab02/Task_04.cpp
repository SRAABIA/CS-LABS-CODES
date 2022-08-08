#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;
float distance(float,float,float,float); //Diameter
float radius(float,float,float,float);
float circumference(float);
float area(float);
int main(){
    float x1,y1,x2,y2,rad=0;
    cout<<"\nEnter the space-separated co-ordinates for x1 and y1: ";
    cin>>x1>>y1;
    cout<<"\nEnter the space-separated co-ordinates for x2 and y2: ";
    cin>>x2>>y2;
    rad=radius(x1,y1,x2,y2);
    cout<<endl<<"Radius: "<<radius(x1,y1,x2,y2);
    cout<<endl<<"Area: "<<area(rad);
    cout<<endl<<"Circumference: "<<circumference(rad)<<endl;

}
float distance(float x1,float y1,float x2,float y2){
    return sqrt( (pow((x2-x1),2) + (pow((y2-y1),2) ) ) );
}
float radius(float x1,float y1,float x2,float y2){
    /* Radius between P(x1,y1) & C(x2,y2)   */
    float dist = distance(x1,y1,x2,y2);
    return dist;
}
float area(float radius){
    return PI * pow(radius,2);
}
float circumference(float radius){
    return 2*PI*radius;
}