// leap year problem
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year \n";
    cin >> year;
    if (year % 400 || year % 4)
    {
        cout << "Leap year \n";
    }
    else if (year % 100)
    {
        cout << "Not a Leap year";
    }
    else
    {
        cout << "Not a Leap year";
    }
    return 0;
}