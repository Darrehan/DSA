// creating two dimentional arrays
#include <iostream>
using namespace std;
int main()
{
    int a[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}}; // double array inside the stack
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    int *c[4]; // array of an pointer
    c[0] = new int[4];
    c[1] = new int[4];
    c[2] = new int[4];
    c[3] = new int[4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << c[i][j];
        }
        cout << "\n";
    }
    cout<<"\n";
    cout<<"\n";
    int **b;           // declaration of double pointer inside the stack
    b = new int *[4];  // array of an pointer
    b[0] = new int[4]; // dynamic memory allocation of each array
    b[1] = new int[4];
    b[2] = new int[4];
    b[3] = new int[4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << b[i][j];
        }
        cout << "\n";

    }
// in case of array of an pointer and double pointer we get garbage value
    return 0;
}