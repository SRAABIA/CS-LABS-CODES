#include<iostream>
using namespace std;
class Car{
	string model;
	int price;
	public:
//		Car(string m,int p){
//			model = m;
//			price = p;
//		}
		void set_model(string a){
			  model = a;
		}
		string get_model(){
			return model;
		}
		virtual void set_price(int)=0;
		
		int get_price(){
			return price;
		}
};
class Color:public Car{
	int price;
	public:
		Color  (int p){
			price = p;
		}
		void set_price(int a){
			price = a;
		}
		int get_price(){
			return price;
		}
};
class Company:public Car{
	int price;
	public:
		Company (int p){
			price = p;
		}
		void set_price(int a){
			price = a;
		}	
		int get_price(){
			return price;
		}
};
int main(){
	
	Color color(9400);
	Company company(5600);
	color.Car::set_model("ABCD");
	cout<<endl<<"Model of Car is "<<color.Car::get_model();
	cout<<endl<<"Price of Color of Car is "<<color.get_price();
	cout<<endl<<"Price by Company of Car is "<<company.get_price();

}
