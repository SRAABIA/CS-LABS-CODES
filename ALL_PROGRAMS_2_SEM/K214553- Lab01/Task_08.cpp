#include <iostream>
using namespace std;

int main()
{
    int days, x;
    cout << "For how many EMPLOYEES you wish to make a report(max=4): ";
    cin >> x;
    cout << endl
         << "for how many DAYS you wish to make a report(for eg=30): ";
    cin >> days;
    int prod[4][days][6] = {0};
    int empid[4] = {0};
    int prodid[6] = {0};
    int sum[6] = {0};     // SUM of each product
    int sum2[4][6] = {0}; // SUM of each product for each employee
    int sum1[4] = {0};    // SUM of monthly products;
    int i, j, k;
    cout << "======At first, enter product IDs======" << endl;
    for (k = 0; k < 6; k++)
    {
        cout << endl
             << "Enter Product(" << k + 1 << ") ID: ";
        cin >> prodid[k];
    }
    for (i = 0; i < x; i++)
    { // employee count
        cout << endl
             << endl
             << "Employee(" << i + 1 << ") enter your id: ";
        cin >> empid[i];
        for (j = 0; j < days; j++)
        {
            cout << endl
                 << "Day(" << j + 1 << ")==: " << endl;
            for (k = 0; k < 6; k++)
            {
                cout << endl
                     << "enter product " << k + 1 << " price: ";
                cin >> prod[i][j][k];
                sum[k] += prod[i][j][k]; // Calculating total of each product
                sum2[i][k] += prod[i][j][k];
                sum1[i] += prod[i][j][k]; // Calculating total of each employee
                // cout<<endl<<"current sum: "<<sum[k];
            }
        } // closing for employee count for loop
        cout << endl
             << endl
             << "Employee(" << i + 1 << ")'s sum for " << days << " days: " << sum1[i] << endl;
    }

    // NOW PRINTING THE DESIRED TABLE:
    cout << endl
         << "________________________________________________________________________________________________________________________________________" << endl;
    cout << endl
         << "| Products ID:\t\t| Employee 1\t\t| Employee 2\t\t| Employee 3\t\t| Employee 4\t\t| Total Prod Sale\t|";
    cout << endl
         << "             ";
    for (i = 0; i < 4; i++)
    {
        cout << "\t\t|\t" << empid[i];
    }
    cout << "\t\t|" << endl;

    for (k = 0; k <= 6; k++)
    {
        if (k >= 0 && k < 6)
        {
            cout << endl
                 << prodid[k] << "|\t\t\t\t";
        }
        else if (k == 6)
        {
            cout << "TOTAL:\t\t\t|    \t";
        }
        for (j = 0; j < 5; j++)
        {
            if (j >= 0 && j < 4 && k < 6)
            {
                cout << sum2[j][k] << "\t\t|\t";
            }
            else if (j == 4 && k < 6)
            {
                cout << sum[k] << endl;
            }
            else if (k == 6 && j < 4)
            {
                cout << sum1[j] << "\t\t|\t";
            }
        }
    }
    cout << endl
         << "________________________________________________________________________________________________________________________________________" << endl;
}