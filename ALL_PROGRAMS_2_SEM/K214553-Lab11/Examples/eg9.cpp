#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int roll;
    char name[25];
    float marks;

public:
    void displayStudent()
    {
        cout << "Roll no: " << roll << endl
             << "NAME: " << name << endl
             << "Marks: " << marks << endl;
    }

    void Readdata()
    {
        fstream f;
        student s;
        f.open("studen.dat", ios::in | ios::binary);

        if (f.read((char *)&s, sizeof(s)))
        {
            cout << endl
                 << endl;
            s.displayStudent();
        }
        else
        {
            cout << "Error in reading data from file...\n";
        }
    }
};
int main()
{

    student s;
    s.Readdata();
    return 0;
}