#include<iostream>
using namespace std;
void showChoices();
float feetAndInchesToMetersAndCent(float &, float);
float metersAndCentTofeetAndInches(float &, float);
int main(){
    int how_many,x;
    cout<<endl<<"How Many Time You Wish To Run The Program: ";
    cin>>how_many;
    
    while(x!=how_many){
        
        showChoices();
        x++;
    }
}
void showChoices(){
    int choice,option;
    float feets=0,cents=0,meters=0,inches=0,cen=0,inch=0;
    cout<<endl<<"[1] Explain an option"<<endl<<"[2] Feet and Inches --> Meters and Centimeters"<<endl;
    cout<<"[3] Meters and Centimeters --> Feet and Inches"<<endl<<"[4] Exit"<<endl<<"::  ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Which Option You Want To Be Explained: ";
            cin>>option;
            switch(option){
                case 1: cout<<endl<<"\tThis option informs you how to run the program"<<endl;
                break;
                case 2: cout<<endl<<"\tThis option will convert length entered in Feets and Inches to Meters and Centimeters."<<endl;
                break;
                case 3: cout<<endl<<"\tThis option will convert length entered in Meters and Centimeters to Feets and Inches."<<endl;
                break;
                case 4: cout<<endl<<"\tThis option will terminate the program.";
                break;
            }
            break;
        case 2:
            cout<<endl<<"Enter the length with spacing in Feets and Inches: ";
            cin>>feets;
            cin>>inches;
            cen = feetAndInchesToMetersAndCent(feets , inches);
            cout<<endl<<"The converted length is: "<<feets<<"m "<<cen<<"cm ."<<endl;
            break;
        case 3:
            cout<<endl<<"Enter the length with spacing in Meters and Centimeters: ";
            cin>>meters;
            cin>>cents;
            inch = metersAndCentTofeetAndInches(meters, cents);
            cout<<endl<<"The converted length is: "<<meters<<"ft "<<inch<<"inches ."<<endl;
            break;
        case 4:
            exit(0);
            break;
    }

}
float feetAndInchesToMetersAndCent(float &feets , float in){
    float meter=0;
    feets = (feets/3.2808399);
    meter = in*2.54;
    return meter;
}
float metersAndCentTofeetAndInches(float &meters, float cen){
    float inch=0;
    meters = meters*3.2808399;
    inch= cen/2.54;
    return inch;
}
