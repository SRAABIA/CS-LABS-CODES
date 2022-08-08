#include<iostream>
#include<fstream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person (){}
    Person(string n,int y){
        name = n;
        age = y;
    }
};
int main(){
    Person person("Raabia",19);
    string n;
    int i;
    fstream f("file.txt",ios::out);
    f.write((char*)&person,sizeof(person));
    f.close();
    Person p;
    f.open("file.txt",ios::in);
    f.read((char*)&p,sizeof(p));
    cout<<"name: "<<p.name;
    cout<<"\nage: "<<p.age;
    f.close();
}