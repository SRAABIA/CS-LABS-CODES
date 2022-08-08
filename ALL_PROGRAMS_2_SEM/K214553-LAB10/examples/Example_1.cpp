#include<iostream>
using namespace std;
class A {
public:
int a;

};
class B : public A{
public:
int b;

};
class C : public A{
public:
int c;

};
class D : public B, public C{
public:
int d;

};
int main() {
D obj;
obj.a = 200; //will cause an error because ambiguity occurs compiler doesnt know which path to take to acccess the methods of the grandparent class
