#include <iostream>
using namespace std;
template <class T>
class student
{
protected:
    T rollno;
    T marks[5];

public:
    student() {}
    student(T a, T *b)
    {
        rollno = a;
        for (int i = 0; i < 5; i++)
        { marks[i] = b[i]; }
    }
    void input()
    {
        cout << "\nEnter rollno : ";
        fflush(stdin);
        cin >> rollno;
        for (int i = 0; i < 5; i++)
        {   cout << "\nEnter marks is subject: " << i + 1 << " : ";
            fflush(stdin);
            cin >> marks[i];
        }
    }
    T Calculate()
    {
        T total_marks = 0;
        for (int i = 0; i < 5; i++)
        {
            total_marks += marks[i];
        }
        return total_marks;
    }
};
int main()
{
    student<int> obj;
    obj.input();
    cout << "\nYour Total Marks are : " << obj.Calculate();

    // int array[5] = {98,88,75,74,66};
    // student<int>obj(4553,array);
    // cout << "\nYour Total Marks are : " << obj.Calculate();
    
    return 0;
}
