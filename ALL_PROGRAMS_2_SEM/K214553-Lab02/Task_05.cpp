#include<iostream>
#include<cmath>
using namespace std;
float Function (void );
int main(){
    float Billing_Amount = Function(); 
    cout<<"Billing Amount: PKR "<<Billing_Amount<<endl;
}
float Function(){
    int hourly_rate, consulting_time, Income;
    float Billing_Amount = 0;
    cout<<"Enter Hourly Rate: ";
    cin>>hourly_rate;
    cout<<"Enter the Consulting Time in Minutes: ";
    cin>>consulting_time;
    cout<<"Enter Your Income: ";
    cin>>Income;
    if(Income <= 25000 && consulting_time <= 30){
        return 0;
    }
    else if(Income <= 25000 && consulting_time > 30){
        int time = consulting_time - 30;
        Billing_Amount = time * hourly_rate * (0.40/60);
    }
    else if(Income >25000 && consulting_time <= 20){
        Billing_Amount = 0;
    }
    else if(Income >25000 && consulting_time > 20){
            Billing_Amount = hourly_rate * 0.70 * ((float)(consulting_time- 20) / 60);
        }
   return Billing_Amount;
}