#include <iostream>
using namespace std;
class Vehicle
{
protected:
    string Type, Make, Model, Color;
    int Year;
    float Miles;

public:
    Vehicle() {}
    Vehicle(string Type, string Make, string Model, string Color, int Year, float Miles)
    { 
        this->Type = Type;
        this->Make = Make;
        this->Model = Model;
        this->Color = Color;
        this->Year = Year;
        this->Miles = Miles;
    }
    void set_type(string a) { Type = a; }
    void set_make(string b) { Make = b; }
    void set_model(string c) { Model = c; }
    void set_color(string d) { Color = d; }
    void set_year(int y) { Year = y; }
    void set_miles(float m) { Miles = m; }
    string get_type() { return Type; }
    string get_make() { return Make; }
    string get_model() { return Model; }
    string get_color() { return Color; }
    int get_year() { return Year; }
    float get_miles() { return Miles; }
};
class GasVehicles : virtual public Vehicle
{
protected:
    float tank_size;

public:
    GasVehicles() {}
    GasVehicles(float tank_size, string Type, string Make, string Model, string Color, int Year, float Miles) : Vehicle(Type, Make, Model, Color, Year, Miles)
    { 
        this->tank_size = tank_size;
    }
    void set_size(int a) { tank_size = a; }
    int get_size() { return tank_size; }
};
class ElectricVehicle : virtual public Vehicle
{
protected:
    float energy;

public:
    ElectricVehicle() {}
    ElectricVehicle(float energy, string Type, string Make, string Model, string Color, int Year, float Miles) : Vehicle(Type, Make, Model, Color, Year, Miles)
    { 
        this->energy = energy;
    }
    void set_energy(float e) { energy = e; }
    float get_energy() { return energy; }
};
class HighPerformance : public GasVehicles
{
protected:
    float horse_power, top_speed;

public:
    HighPerformance() {}
    HighPerformance(float horse_power, float top_speed, float tank_size, string Type, string Make, string Model, string Color, int Year, float Miles) : GasVehicles(tank_size, Type, Make, Model, Color, Year, Miles)
    {
        this->horse_power = horse_power;
        this->top_speed = top_speed;
    }
    void set_hp(float h) { horse_power = h; }
    void set_tp(float t) { top_speed = t; }
    float get_hp() { return horse_power; }
    float get_tp() { return top_speed; }
};
class HeavyVehicles : public GasVehicles, public ElectricVehicle
{
protected:
    float max_weight, length;
    int wheels;

public:
    HeavyVehicles() {}
    HeavyVehicles(float max_weight, float length, int wheels, float tank_size, string Type, string Make, string Model, string Color, int Year, float Miles, float energy) : GasVehicles(tank_size, Type, Make, Model, Color, Year, Miles), ElectricVehicle(energy, Type, Make, Model, Color, Year, Miles), Vehicle(Type, Make, Model, Color, Year, Miles)
    { 
        this->max_weight = max_weight;
        this->length = length;
        this->wheels = wheels;
    }
    void set_weight(float w) { max_weight = w; }
    void set_length(float l) { length = l; }
    void set_wheels(float w) { wheels = w; }
    float get_weight() { return max_weight; }
    float get_length() { return length; }
    int get_wheels() { return wheels; }
};
class SportsCar : public HighPerformance
{
protected:
    string gearbox, drive_system;

public:
    SportsCar() {}
    SportsCar(string gearbox, string drive_system, float horse_power, float top_speed, float tank_size, string Type, string Make, string Model, string Color, int Year, float Miles) : HighPerformance(horse_power, top_speed, tank_size, Type, Make, Model, Color, Year, Miles)
    {
        this->gearbox = gearbox;
        this->drive_system = drive_system;
    }
    void set_g(string g) { gearbox = g; }
    void set_d(string d) { drive_system = d; }
    string get_g() { return gearbox; }
    string get_d() { return drive_system; }
};
class ConstructionTruck : public HeavyVehicles
{
protected:
    string cargo;

public:
    ConstructionTruck() {}
    ConstructionTruck(string cargo, float max_weight, float length, int wheels, float tank_size, string Type, string Make, string Model, string Color, int Year, float Miles, float energy) : HeavyVehicles(max_weight, length, wheels, tank_size, Type, Make, Model, Color, Year, Miles, energy), Vehicle(Type, Make, Model, Color, Year, Miles)
    {
        this->cargo = cargo;
    }
    void set_cargo(string c) { cargo = c; }
    string get_cargo() { return cargo; }
};
class Bus : public HeavyVehicles
{
protected:
    int num_of_seats;

public:
    Bus() {}
    Bus(int num_of_seats, float max_weight, float length, int wheels, float tank_size, string Type, string Make, string Model, string Color, int Year, float Miles, float energy) : HeavyVehicles(max_weight, length, wheels, tank_size, Type, Make, Model, Color, Year, Miles, energy), Vehicle(Type, Make, Model, Color, Year, Miles)
    { 
        this->num_of_seats = num_of_seats;
    }
    void set_seat(int s) { num_of_seats = s; }
    int get_seat() { return num_of_seats; }
    void Display();
};

void Bus :: Display(){

    cout<<endl<<"Type Of Vehicle: \t"<<get_type();
    cout<<endl<<"Maker Of Vehicle: \t"<<get_make();
    cout<<endl<<"Model Of Vehicle: \t"<<get_model();
    cout<<endl<<"Color Of Vehicle: \t"<<get_color();
    cout<<endl<<"Year Of Vehicle: \t"<<get_year();
    cout<<endl<<"Weight Of Vehicle: \t"<<get_weight();
    cout<<endl<<"Length Of Vehicle: \t"<<get_length();
    cout<<endl<<"Miles Driven By Vehicle: \t"<<get_miles();
    cout<<endl<<"No. of Wheels Of Vehicle: \t"<<get_wheels();
    cout<<endl<<"No. of Seats Of Vehicle: \t"<<get_seat();
    cout<<endl<<"Battery Size Of Vehicle: \t"<<get_energy();
    cout<<endl<<"Fuel Of Vehicle: \t"<<get_size();

}

int main()
{
    int a,b,c;
    string e,f,g,h;
    float i,j,k,l,m;
    cout<<endl<<"Enter No. of Seats Of Vehicle: ";
    cin>> c;
    cout<<endl<<"Enter Weight Of Vehicle: ";
    cin>> l;
    cout<<endl<<"Enter Length Of Vehicle: ";
    cin>> m;
    cout<<endl<<"Enter No. of Wheels Of Vehicle: ";
    cin>> b;
    cout<<endl<<"Enter Tank size for fuel Of Vehicle: ";
    cin>> k;
    cout<<endl<<"Enter Type Of Vehicle: ";
    cin>> e;
    cout<<endl<<"Enter Maker Of Vehicle: ";
    cin>> f;
    cout<<endl<<"Enter Model Of Vehicle: ";
    cin>> g;
    cout<<endl<<"Enter Color Of Vehicle: ";
    cin>> h;
    cout<<endl<<"Enter Year Of Vehicle: ";
    cin>> a;
    cout<<endl<<"Enter Miles Driven By Vehicle: ";
    cin>> i;
    cout<<endl<<"Enter Energy Of Vehicle: ";
    cin>> j;
    // Bus(int num_of_seats, float max_weight, float length, int wheels, float tank_size, string Type, string Make, string Model, string Color, int Year, float Miles, float energy)
    Bus bus(c,l,m, b,k,e,f,g,h,a,i,j);
    bus.Display();
}