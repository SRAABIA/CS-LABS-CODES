#include <iostream>
                                    /* STRUCTURES */
using namespace std;

struct studentType
{
    string firstName;
    string lastName;
    char courseGrade;
    float courseScore;
    double GPA;
};

int main()
{
    studentType newStudent;

    cout << "Enter Details for the Student";

    cout << "Enter Student's First Name : ";
    cin >> newStudent.firstName;

    cout << "Enter Student's Last Name : ";

    cin >> newStudent.lastName;

    cout << "Enter Student's Course Grade : ";
    cin >> newStudent.courseGrade;

    cout << "Enter Student's Course Score : ";
    cin >> newStudent.courseScore;

    cout << "Enter Student's GPA : ";
    cin >> newStudent.GPA;
    cout<<endl;
    cout << newStudent.firstName << endl;
    cout << newStudent.lastName << endl;
    cout << newStudent.courseGrade << endl;
    cout << newStudent.courseScore << endl;
    cout << newStudent.GPA << endl;
}