#include<iostream>
using namespace std;
class PlayGround{
    double length, width;
    public:
    PlayGround(){
        cout<<endl<<"By default constructor it is: ";
    }
    PlayGround(double length){
        this->length = length;
        cout<<endl<<"Constructor with one parameter and value of parameter is: "<<length;
    }
    PlayGround(double length, double width){
        this->length = length;
        this->width = width;
    cout<<endl<<"Constructor with two parameters and value of parameters is: "<<length<<" "<<width<<endl;

    }
};
int main(){
    PlayGround obj1;
    PlayGround obj2(9);
    PlayGround obj3(8,4);

}