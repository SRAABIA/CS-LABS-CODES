#include<iostream>
using namespace std;
class TempKelvin;
class TempCelsius;
class DailyTemperature{
    float temp;
    public:
    DailyTemperature(float t){
        temp = t;
    }
    friend void calc(DailyTemperature,TempKelvin,TempCelsius);
};
class TempKelvin{
    float kelvin;
    public:
    friend void calc(DailyTemperature,TempKelvin,TempCelsius);

};

class TempCelsius{
    float celsius;
    public:
    friend void calc(DailyTemperature,TempKelvin,TempCelsius);

};
void calc(DailyTemperature d,TempKelvin k,TempCelsius c){
    
    // k.kelvin = ((float)5/9*(d.temp))+ 459.67; Wrong formula
    k.kelvin = (d.temp + 459.67)*((float)5/9);
    cout<<"\nT in Kelvin: "<<k.kelvin;
    c.celsius = 0.5555*(d.temp - 32);
    cout<<"\nT in Celsius: "<<c.celsius;

}
int main(){
    float f;
    // while(f!=0){
    cout<<"\n\nDaily Temp In Fahrenheit: ";
    cin>>f;
    DailyTemperature temp(f);
    TempKelvin k;
    TempCelsius c;
    calc(f,k,c);
    // }
}