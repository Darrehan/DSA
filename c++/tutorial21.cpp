// pattern in c++
#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the of rows buddy \n";
    cin >> row;
    for (int i = 1; i <= row; i++) //  post increment
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
    /*
    1
    22
    333
    4444
    55555
    666666
    */
}