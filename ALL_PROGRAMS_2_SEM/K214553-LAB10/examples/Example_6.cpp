#include <iostream>
using namespace std;
class Base {
};
class Derived : public Base {
};
int main()
{
Derived d1;
Base* b1 = (Base*)(&d1); // allowed
Base* b2 = static_cast<Base*>(&d1);
return 0;
}
