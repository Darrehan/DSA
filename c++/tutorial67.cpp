// arrays abstract data type operation's on arrays
#include <iostream>
using namespace std;
struct array
{
    int *a;
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    cout << "the elements are \n";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << "\n";
    }
}
int main()
{
    int n;
    struct array arr;
    cout << "enter the size of an array\n ";
    cin >> arr.size;
    arr.a = new int[arr.size];
    arr.length = 0;
    cout << "enter the number of elements \n ";
    cin >> n;
    cout << "enter the all elements of an array \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr.a[i];
    }
    arr.length = n;
    display(arr);
    return 0;
}