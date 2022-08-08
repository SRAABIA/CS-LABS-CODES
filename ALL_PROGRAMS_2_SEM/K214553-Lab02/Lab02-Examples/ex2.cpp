#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
double larger(double x, double y)
{
    double maximum;
    if (x >= y)
        maximum = x;
    else
        maximum = y;
    return maximum;
}
double compthree(double x, double y, double z){
	return larger(x,larger(y,z));
}
int locked(int x){
	if (x > 5)
	return 2 * x;
	else 
	return x;
}
int main()
{
    double maxNum;
    double one=5;
    double two=6;
    cout << "The larger of 5 and 6 is " << larger(one,two) << endl; 
    cout << "The larger of " << one << " and " << two<< " is " << larger(one, two) << endl; 
    cout << "The larger of " << one << " and 29 is " << larger(one, 29) << endl; 
    maxNum = larger(38.45, 56.78);  
    cout<<"the larger of 38.45, 56.78 iss: "<<  maxNum<<endl;
    double num;
    num = compthree(33,44,65.7);
    cout<<"the larger of three numbers i.e. 33,44,65,7: "<<num<<endl;
    cout<<"The locked function returned the value: "<<locked(9)<<endl;
    cout<<"The locked function returned the value: "<<locked(2)<<endl;
}
