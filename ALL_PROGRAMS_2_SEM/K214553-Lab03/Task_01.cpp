#include<iostream>
using namespace std;
class classUser{
	public:
    int age;
	string name;
   
};
int main(){
	classUser obj;
	obj.name = "Raabia";
    obj.age=18;
    cout<<"My Name is "<<obj.name<<" and I'm "<<obj.age<<" years old.";

}