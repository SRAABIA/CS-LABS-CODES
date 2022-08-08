#include<iostream>
using namespace std;
class A {
public:
int a;

};
class B : virtual public A{ //keyword virtual prevents diamond problem
public:
int b;

};
class C : virtual public A{  //keyword virtual prevents diamond problem
public:
int c;

};
class D : public B, public C{ //multiple inheritance causes diamond problem if the parent classes are not made virtual base classes
public:
int d;

};
int main() {
D obj;
obj.a = 200; //no error
}
