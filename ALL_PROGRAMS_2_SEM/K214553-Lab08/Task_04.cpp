#include<iostream>
#include<cmath>
using namespace std;
class CricketGround;
class RobotsGround;
class FootballGround{
    int single_length;
    public:
    friend class CricketGround;
    friend class RobotsGround;
    FootballGround(int x):single_length(x){}
    void Area(){
        cout<<"The area of SQUARE football ground is: \t\t"<<single_length*single_length;
    }
};
class CricketGround{
    int width;
    int length;
    public:
    void Area(FootballGround a){
        width = a.single_length;
        length = 2*a.single_length;
        cout<<"\nThe area of RECTANGLE cricket ground is: \t"<<length*width;
    }

};
class RobotsGround{
    int radius;
    public:
    void Area(FootballGround a){
        float area = (float)3.1427*pow(a.single_length,2);
        cout<<"\nThe area of ROUND robotic place is: \t\t"<<area;
    }
};
int main(){
    int m;
    cout<<"\nEnter value for side: \t\t\t\t"; cin>>m;
    FootballGround obj(m);
    obj.Area();
    CricketGround obj1;
    obj1.Area(obj);
    RobotsGround obj2;
    obj2.Area(obj);
}