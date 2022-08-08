#include<iostream>
using namespace std;
class Animal{
    public:
    void animalsound(){
        cout<<"\nThe animal makes sound";
    }
};
class Cat : public Animal{
    public:
    void animalsound(){
        cout<<"\nThe cat makes meow";
    }
};
class Dog : public Animal{
    public:
    void animalsound(){
        cout<<"\nThe dog makes bow wow";
    }
};
class Duck : public Animal{
    public:
    void animalsound(){
        cout<<"\nThe duck makes quack quack";
    }
};
int main(){
    Animal a;
    a.animalsound();
    Cat c;
    c.animalsound();
    Dog d;
    d.animalsound();
    Duck de;
    de.animalsound();
}