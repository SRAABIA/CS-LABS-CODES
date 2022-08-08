#include<iostream>
using namespace std;

class Airline{
    bool seat[10]={false};

    public:
    Airline();
    void Assign(int z){
        static int i=0;
        static int j=5;
        string dk;
        if(z==1){
            if(seat[i]==false && i<5){
                seat[i]== true;
                cout<<"\n\n   ==========================================================";
                cout<<"\n   |           You are Assigned Seat No."<<i+1<<" In FIRST CLASS    |";
                cout<<"\n   ==========================================================";
                i++;
            }
            else{
                    cout<<endl<<"           All seats are full in First Class\n           Would you like to have a seat in Economy class(y/n) ? "; cin>>dk;
                    if(dk == "y" || dk == "Y"){
                            goto there;
                    }
                    else{
                    cout<<endl<<"           Next Flight Leaves in 3 hours!!";
                    }
            }
        }
        else if(z==2){
            there:
            if(seat[j]==false && j<10){
                seat[j]==true;
                cout<<"\n   ==========================================================";
                cout<<"\n   |           You are Assigned Seat No."<<j+1<<" In ECONOMY CLASS  |";
                cout<<"\n   ==========================================================";
                j++;
            }
            else{
                    cout<<endl<<"           All seats are full in Economy Class\n           Next Flight Leaves in 3 hours!!";
      
            }

        }
    }
};
Airline::Airline(){ }



int main(){
    int yup;
    while(yup!=3){
    cout<<endl<<endl<<"-------------------------------------------------------------";
     cout<<endl<<"               WELCOME IN AESTHETIC AIRLINES\n";
    cout<<"-------------------------------------------------------------";

    cout<<endl<<"                         Select !"<<endl<<"               1) FIRST CLASS\n               2) ECONOMY\n               3) Exit\n               :: ";
    cin>>yup;
    cout<<endl<<"-------------------------------------------------------------";
    Airline AIR;
    AIR.Assign(yup);  
    }
}