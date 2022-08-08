#include<iostream>
using namespace std;
class input{
    char array[10];
    public:
    void get_input(){
        cout<<"\nEnter Input: ";
        for(int i=0;i<10;i++){
            cout<<endl<<"array["<<i+1<<"]: ";
            cin>>array[i];
        }
    }
    void choice(){
        int c;
        while(c!=4){
        cout<<endl<<"In which Format you need to print the array: ";
        cout<<endl<<"1) Integer\n2) Float\n3) Character\n4) Exit\t:: ";
        cin>>c;
        switch(c){
            case 1:
            cout<<endl<<"Integer Array";
            for(int i=0;i<10;i++){
                cout<<endl<<"array["<<i+1<<"]: "<<(int)array[i];
            }
            break;
            case 2:
            cout<<endl<<"Float Array";
            for(int i=0;i<10;i++){
                cout<<endl<<"array["<<i+1<<"]: "<<(float)array[i];
            }
            break;
            case 3:
            cout<<endl<<"Character Array";
            for(int i=0;i<10;i++){
                cout<<endl<<"array["<<i+1<<"]: "<<(char)array[i];
            }
            break;

            }
        }
    }
};
int main(){
    input in;
    in.get_input();
    in.choice();

 
}