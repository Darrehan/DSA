// pattern in c++
#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter the number of rows buddy \n";
    cin >> row;
    for (int i = 0; i <= row; i++)
    {
        for (int k = 1; k <= row; k++)
        {
            cout << k;
        }
        cout << "\n";
    }
    return 0;
}