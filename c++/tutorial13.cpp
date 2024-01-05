// Conversion of temperature using class and member funtion of class
#include <iostream>
using namespace std;
class temperature
{
    float fahrenheit, celsius;
    int n;

public:
    void getdata(void); // member funtions
    void display(void);
};
void temperature ::getdata(void)
{
    cout << "Press 1 for fahrenheit or press 2 for celsius buddy \n";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Enter the temperature in fahrenheit \n";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        break;
    case 2:
        cout << "Enter the temperature in celsius \n ";
        cin >> celsius;
        fahrenheit = (celsius / (5.0 / 9.0)) + 32.0;
        break;
    default:
        cout << " your input is wrong buddy \n";
        break;
    }
}
void temperature ::display(void)
{
    cout << "the value in fahrenheit  = " << fahrenheit << "\n";
    cout << "the value in celsius = " << celsius << "\n";
}
int main()
{
    temperature temp;
    temp.getdata();
    temp.display();
    return 0;
}
