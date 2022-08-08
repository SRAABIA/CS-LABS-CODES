#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void animalsound(){
        cout<<endl<<"The animal makes a sound.";
    }
};
class Cat:public Animal{
    public:
    void animalsound(){
        cout<<endl<<"The cat says meow.";
    }
};  
class Dog:public Animal{
    public:
    void animalsound(){
        cout<<endl<<"The dog says bow wow.";
    }
};  
class Duck:public Animal{
    public:
    void animalsound(){
        cout<<endl<<"The duck says quack quack.";
    }
};  
int main(){
    Animal *animal ;
    Cat c;
    animal = static_cast<Animal*>(&c); //upcasting 
    animal->animalsound();
    animal = new Dog();
    animal->animalsound();
    animal = new Duck();
    animal->animalsound();
    Cat *cat;
    Dog *dog;
    Duck *duck;
    Animal animall;
    cat = (Cat*)(&animall);  //downcasting
    cat->animalsound();
    dog = (Dog*)(&animall);
    dog->animalsound();
    duck = (Duck*)(&animall);
    duck->animalsound();
}