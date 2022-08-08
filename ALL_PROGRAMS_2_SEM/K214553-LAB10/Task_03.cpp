#include<iostream>
using namespace std;
class Animal{
    protected:
    string name;
    public:
    Animal(string name){
        this->name=name;
    }
    virtual void foundIn(){ 
        cout<<endl<<"An animal can be found in many places. ";
    }
    void setName(string name){
        this ->name=name;
    }
    string getName(){
        return name;
    }
};
class Mammal : virtual public Animal{
    public:
    Mammal(string n):Animal(n){

    }
    void foundIn(){ 
        cout<<endl<<"An mammal can be found in water or on land. ";
    }
};
class MarineAnimal : virtual public Animal{
    public:
    MarineAnimal(string n):Animal(n){
        
    }
    void foundIn(){ 
        cout<<endl<<"A marine animal can only be found in bodies of water. ";
    }
};
class Whales : public Mammal, public MarineAnimal{
    string x;
    public:
    Whales( string n, string x):Mammal(n),MarineAnimal(n),Animal(n){
        this->x=x;
    }
    void foundIn(){ 
        cout<<endl<<"A "<<x<<" "<<name<<" can only be found in the ocean. ";
    }
};
int main(){
    Whales whaleBaleen("whale","Baleen");
    whaleBaleen.Animal::foundIn();
    whaleBaleen.Mammal::foundIn();
    whaleBaleen.MarineAnimal::foundIn();
    whaleBaleen.foundIn();
}