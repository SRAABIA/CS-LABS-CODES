#include<iostream>
using namespace std;
float regular (int& );
float premium(int& , int&);
int main(){
    int account_num, mins=0, night_mins=0;
    char service_code;
    cout<<endl<<"Enter Account Number: ";
    cin>>account_num;
    cout<<"Enter the Service Code"<<endl<<"R- Regular"<<endl<<"P- Premium"<<endl;
    cin>>service_code; 
    if(service_code == 'R')
    {   cout<<"Enter the number of minutes: ";
        cin>>mins;
        float charges= regular(mins);
        cout<<endl<<"Account Number: "<<account_num;
        cout<<endl<<"Service Code: Regular";
        cout<<endl<<"Number of Minutes: "<<mins;
        cout<<endl<<"Amount Due: PKR "<<charges;
    }
    else if(service_code == 'P')
    {
        cout<<"Enter the number of minutes used at Day: ";
        cin>>mins;
        cout<<"Enter the number of minutes used at Night: ";
        cin>>night_mins;
        float charges = premium(mins,night_mins);
        cout<<endl<<"Account Number: "<<account_num;
        cout<<endl<<"Service Code: Premium";
        cout<<endl<<"Number of Minutes Used During Day Time: "<<mins;
        cout<<endl<<"Number of Minutes Used During Night Time: "<<night_mins;
        cout<<endl<<"Amount Due: PKR "<<charges;

    }  
    cout<<endl<<"--------------------------THE END-----------------------------";
}
float regular (int& mins ){
    int new_mins;
    float rate = 10.00 ;
    float charges = 0; 
    new_mins = mins-50;
    if(new_mins > 0){
        charges = rate + (new_mins * 0.20) ;
    }
    else{
        charges = rate;
    }

    return charges;
}
float premium( int& mins, int& nightmins){
    float rate = 25.00;
    float charges_night = 0, charges_day = 0;
    //daymins
    int minute=0;
    minute = (mins-75);
    if(minute>0){
        charges_day = (minute*0.10) + rate; 
    }
    else 
    charges_day = rate;
    //nightmins
    int mine = 0;
    mine = (nightmins-100);
    if(mine>0){
        charges_night = (mine*0.05) + rate;
    }
    else 
    charges_night = rate;

    return charges_day + charges_night;


}