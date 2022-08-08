#include<iostream>
using namespace std;
class Package{
    protected:
    string name, address, city, state, zip_code;
    float weight, cost_per_ounce,cost1;
    public:
    Package(){};
    Package(string name, string address, string city, string state, string zip_code, float weight, float cost_per_ounce){
        this -> name = name;
        this -> address = address;
        this -> city = city;
        this -> state = state;
        this -> zip_code = zip_code;
        if(weight>0){
        this -> weight = weight;} else{ this -> weight = 0.0; }
        if(cost_per_ounce>0){
        this -> cost_per_ounce = cost_per_ounce;} else { this -> cost_per_ounce = 0.0 ;}
}

    void output(){
        cout<<"\n\tName: "<<name;
        cout<<"\n\tAddress: "<<address;
        cout<<"\n\tCity: "<<city;
        cout<<"\n\tState: "<<state;
        cout<<"\n\tZIP-code: "<<zip_code;
        cout<<"\n\tWeight: "<<weight;
    }
    double calculate_cost(){
            cost1 =  weight*cost_per_ounce;
            return cost1;
    }
};
class TwodDayPackage : public Package{
    protected:
    float flat_fee;
    float shipping_cost;
    public:
    TwodDayPackage(float flat_fee,string name, string address, string city, string state, string zip_code, float weight, float cost_per_ounce): Package( name,  address,  city,  state,  zip_code,  weight,  cost_per_ounce){ this->flat_fee = flat_fee; }
    double calculate_cost(){
        shipping_cost = flat_fee + Package::calculate_cost();
        return shipping_cost;
    }
    void output(){
        cout<<"\n\tName: "<<name;
        cout<<"\n\tAddress: "<<address;
        cout<<"\n\tCity: "<<city;
        cout<<"\n\tState: "<<state;
        cout<<"\n\tZIP-code: "<<zip_code;
        cout<<"\n\tWeight: "<<weight;
    }
};
class OverNightPackage : public Package{
    protected:
    float additional_fee_per_ounce;

    public:
    OverNightPackage(float additional_fee_per_ounce,string name, string address, string city, string state, string zip_code, float weight, float cost_per_ounce): Package( name,  address,  city,  state,  zip_code,  weight,  cost_per_ounce){ this->additional_fee_per_ounce = additional_fee_per_ounce; }
    double calculate_cost(){
        return ( (additional_fee_per_ounce * weight) +  Package::calculate_cost());
    }
    void output(){
        cout<<"\n\tName: "<<name;
        cout<<"\n\tAddress: "<<address;
        cout<<"\n\tCity: "<<city;
        cout<<"\n\tState: "<<state;
        cout<<"\n\tZIP-code: "<<zip_code;
        cout<<"\n\tWeight: "<<weight;
    }
};


int main(){
    float w;
	cout<<endl<<"=========================================="<<endl;
	Package p("Syeda","f-64","karachi","pakistan","z-1004",9.1,12);
	p.output();
	cout<<"\n\tNormal Package Cost: "<<p.calculate_cost(); cout<<endl;
	cout<<endl<<"=========================================="<<endl;
    TwodDayPackage two(4000.23,"Raabia","A-108","KHI","Pak","ss-11",10.1,2);
    two.output();
    cout<<"\n\tTwo Day Package Cost: "<<two.calculate_cost(); cout<<endl;
    cout<<endl<<"=========================================="<<endl;
    OverNightPackage o(12.1,"Wara","p-100","lhr","Pak","122-qww",100.2,99);
    o.output();
    cout<<"\n\tOver Night Package Cost: "<<o.calculate_cost(); cout<<endl;
    cout<<endl<<"=========================================="<<endl;
    
}
