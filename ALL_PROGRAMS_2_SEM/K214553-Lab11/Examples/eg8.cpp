#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int roll;
    char name[25];
    float marks;

public:
    void getdata()
    {
        cout << "enter roll no" << endl;
        cin >> roll;

        cout << "enter name" << endl;
        cin >> name;

        cout << "enter marks" << endl;
        cin >> marks;
    }

    void addRecord()
    {
        fstream f;
        student s;
        f.open("studen.dat", ios::app | ios::binary);
        s.getdata();
        f.write((char *)&s, sizeof(s));
        f.close();
    }
};
int main()
{

    student s;
    char c = 'n';
    do
    {
        s.addRecord();
        cout << "do you want to add another record";
        cin >> c;
    } while (c == 'y' || c == 'Y');
    cout << "data written successfully";
}