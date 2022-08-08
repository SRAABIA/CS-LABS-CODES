#include<iostream>
using namespace std;
class Shape{
	
	public:
		virtual float getarea()=0;
		
};
class Rectangle : public Shape{ 
	int side , length;
	public:
		Rectangle(int a, int b){
			side = a;
			length = b;
		}
		float getarea(){
			return (float)side*length;
		}

};
class Triangle : public Shape{
	int side , side2;
	public:
		Triangle(int a, int b){
			side = a;
			side2 = b;
		}
		float getarea(){
			return (float)(side*side2)/2;
		}
};
int main(){
	Rectangle b(3,5);
	cout<<"\nThe Area of Rectangle: "<<b.getarea();
	Triangle t(9,9);
	cout<<"\nThe Area of Triangle: "<<t.getarea();
}
