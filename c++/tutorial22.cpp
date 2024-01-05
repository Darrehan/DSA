// pattern in c++
#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the number of rows \n";
    cin >> row;
    for (int i = row; i >= 1; i--) //  post decrement
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}
/*
7777777
666666
55555
4444
333
22
1
*/