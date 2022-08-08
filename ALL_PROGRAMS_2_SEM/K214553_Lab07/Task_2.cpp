#include<iostream>
#define PI 3.1427
using namespace std;
class volume{
	public:
	float volume_calc(float i){
		return i*i*i;
	}
	float volume_calc(float k, float l){
		return PI*k*k*l;
	}
	float volume_calc(float m, float n, float o){
		return m*n*o;
	}
};
int main(){
	volume v;
	float side,height,length,radius,l,b,h;
	cout<<"Enter Side of cube: 					"; cin>>side;
	cout<<"Enter radius of Cylinder: 			"; cin>>radius;
	cout<<"Enter height of Cylinder: 			"; cin>>height;
	cout<<"Enter length of Rectangular Box: 	"; cin>>l;
	cout<<"Enter breadth of Rectangular Box: 	"; cin>>b;
	cout<<"Enter height of Rectangular Box: 	"; cin>>h;
	cout<<"\n==============================================";
	cout<<"\nVolume of cube: "<<v.volume_calc(side);
	cout<<"\nVolume of cylinder: "<<v.volume_calc(radius,height);
	cout<<"\nVolume of rectangular box: "<<v.volume_calc(l,b,h);

	return 0;
}
