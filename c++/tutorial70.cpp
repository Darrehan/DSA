// linear search by transposition
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
    for (int i = 0; i < arr.length; i++)
    {
        cout << "index = " << i << "  element = " << arr.a[i] << "\n";
    }
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int linearsearch(struct array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->a[i])
        {
            swap(arr->a[i], arr->a[i - 1]);
            return i-1;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    struct array arr;
    cout << "enter the size of an array \n";
    cin >> arr.size;
    arr.a = new int[arr.size];
    arr.length = 0;
    cout << "enter the number of elements buddy \n";
    cin >> n;
    cout << "enter the all elements of an array buddy \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr.a[i];
    }
    arr.length = n;
    cout << "enter the element you want search buddy \n ";
    cin >> key;
    cout << "element is present at index = " << linearsearch(&arr, key) << "\n";
    display(arr);
    return 0;
}