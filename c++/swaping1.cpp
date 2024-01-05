// parameter passing {swaping of numbers using refference variable}
#include <iostream>
using namespace std;
void swap(int &x, int &y); // funtion definition
int main()
{
    int a, b;
    cout << "Enter the number buddy\n";
    cin >> a >> b;
    cout << "the value of a is " << a << "\n";
    cout << "the value of b is " << b << "\n";
    swap(a, b); // funtion call
    cout << "the value of a is " << a << "\n";
    cout << "the value of b is " << b << "\n";
    return 0;
}
void swap(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
