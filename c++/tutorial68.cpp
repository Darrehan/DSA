// append,insert and delete an element in an array
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
void append(struct array *arr, int m)
{
    if (arr->length < arr->size)
    {
        arr->a[arr->length] = m;
        arr->length++;
    }
}
void insert(struct array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->a[i] = arr->a[i - 1];
        }
        arr->a[index] = x;
        arr->length++;
    }
}
 int del (struct array *arr, int inde)
{
    int x=0;
    if (inde >= 0 && inde < arr->length)
        x = arr->a[inde];
    for (int i = inde; i < arr->length - 1; i++)
    {
        arr->a[i]=arr->a[i+1];
    }
    arr->length--;
    return x;
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
    int m;
    cout << "enter the element you want add buddy \n";
    cin >> m;
    append(&arr, m);
    int index, x;
    cout << "enter the index and element you want insert buddy \n";
    cin >> index >> x;
    insert(&arr, index, x);
    int inde;
    cout<<"enter the element index you want delete buddy \n";
    cin>>inde;
    del(&arr, inde);
    cout<<del(&arr,inde)<<"\n";
    display(arr);
    return 0;
}