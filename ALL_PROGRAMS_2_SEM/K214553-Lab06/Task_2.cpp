#include<iostream>
using namespace std;
class  Vehicles{
	protected:
	double price;

	public:
	// Vehicles(){}
	// Vehicles(double price){
	// 	this-> price = price;
	// }
};
class Car : public Vehicles {
	protected:
	int num_of_seats;
	int num_of_doors;
	string fuel_diesel;
	public:
	// Car(){}
	// Car(int seat_num, int door_num, string fuel): Vehicles(price){
	// 	num_of_seats = seat_num;
	// 	num_of_doors = door_num;
	// 	fuel_diesel = fuel;
	// }
	
};
class Motorcycle : public Vehicles{
	protected:
	int num_of_cylinders;
	int num_of_gears;
	int num_of_wheels;

};
class Audi : public Car{
	protected:
	string model_type;
	public:
	// Audi(){}
	// Audi(string model_type, int seat_num, int door_num, string fuel, double price ):Car(seat_num,door_num,fuel)
	// {
	// 	this -> model_type = model_type;
	// }
		void input(){
			cout<<endl<<"######### AUDI #########";
			cout<<endl<<"Enter Model Type: 				";	fflush(stdin); getline(cin,model_type);
			cout<<endl<<"Enter Price:					";	cin>>price;
			cout<<endl<<"Enter Number Of Seats: 				";	cin>>num_of_seats;
			cout<<endl<<"Enter Number Of Doors: 				";	cin>>num_of_doors;
			cout<<endl<<"Enter Fuel Type(Diesel/ Petrol/ Gas):  		";	fflush(stdin); getline(cin,fuel_diesel);
	}
		void output(){
			cout<<endl<<"\t\t######### AUDI #########";
			cout<<endl<<"\tModel Type: 		"<<model_type;
			cout<<endl<<"\tPrice: 			"<<price;
			cout<<endl<<"\tNumber Of Seats:	"<<num_of_seats;
			cout<<endl<<"\tNumber Of Doors: 	"<<num_of_doors;
			cout<<endl<<"\tFuel Type: 		"<<fuel_diesel;
		}
	
};
class Yamaha : public Motorcycle{
	protected:
		string make_type;
	public:
	void input(){
		cout<<endl<<"######### YAMAHA #########";
		cout<<endl<<"Enter Price:				"; cin>>price;
		cout<<endl<<"Enter Number Of Cylinders:		"; cin>>num_of_cylinders;
		cout<<endl<<"Enter Number Of Gears:			"; cin>>num_of_gears;
		cout<<endl<<"Enter Number Of Wheels:			"; cin>>num_of_wheels;
		cout<<endl<<"Enter Make-Type:			"; fflush(stdin); getline(cin,make_type);

	}
	void output(){
		cout<<endl<<"\t\t######### YAMAHA #########";
		cout<<endl<<"\tPrice:			"<<price;
		cout<<endl<<"\tNumber Of Cylinders:	"<<num_of_cylinders;
		cout<<endl<<"\tNumber Of Gears:	"<<num_of_gears;
		cout<<endl<<"\tNumber Of Wheels:	"<<num_of_wheels;
		cout<<endl<<"\tMake-Type:		"<<make_type;
	}
		
};
int main(){
	Audi aud; aud.input();
	Yamaha Yama; Yama.input();  cout<<endl; aud.output(); cout<<endl;  Yama.output();
}