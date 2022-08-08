#include <iostream>
using namespace std;
class Time
{
private:
    int hours;   // 0 to 23
    int minutes; // 0 to 59
public:
    // required constructors
    Time()
    {
        hours = 0;
        minutes = 0;
    }
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    // method to display time
    void displayTime()
    {
        cout << "H: " << hours << " M:" << minutes << endl;
    }
    // overloaded prefix ++ operator
    Time operator++()
    {
        ++minutes; // increment this object
        if (minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        return Time(hours, minutes);
    }
    // overloaded postfix ++ operator
    Time operator++(int)
    {
        // save the original value
        Time T(hours, minutes);
        // increment this object
        ++minutes;
        if (minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        // return old original value
        return T;
    }
};
int main()
{
    Time T1(11, 59), T2(10, 40);
//    ++T1;             // increment T1 12:0
//    T1.displayTime(); // display T1
//    ++T1;             // increment T1 again 12:1 
//    T1D.displayTime(); // display T1
//    T2++;             // increment T2 10:41
//    T2.displayTime(); // display T2
//    T2++;             // increment T2 again 10:42
//    T2.displayTime(); // display T2
//   ++++T1; 
	++++T2;
     T2.displayTime();
    return 0;

}