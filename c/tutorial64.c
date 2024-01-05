// append ,insert and delete an element in an array
#include <stdio.h>
#include <stdlib.h>
struct array
{
    int *a;
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("the elements are \n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d", arr.a[i]);
        printf("\n");
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
int del(struct array *arr, int inde)
{ int x=0;
if(inde>=0&&inde<arr->length)
{
    x=arr->a[inde];
for(int i=inde;i<arr->length-1;i++)
{
  arr->a[i]=arr->a[i+1];
}
arr->length--;
return x;
}
}
int main()
{
    int n;
    struct array arr;
    printf("enter the size of array \n");
    scanf("%d", &arr.size);
    arr.a = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    printf("enter the number of elements  \n");
    scanf("%d", &n);
    printf("enter the all elements of an array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.a[i]);
    }
    arr.length = n;
    int m;
    printf("enter the element you want add buddy \n");
    scanf("%d", &m);
    append(&arr, m);
    int index, x;
    printf("enter the index and element  you want insert buddy \n");
    scanf("%d%d", &index, &x);
    insert(&arr, index, x);
    int inde;
    printf("enter the index of number you want delete buddy \n");
    scanf("%d",&inde);
    del(&arr,inde);
    display(arr);
    return 0;
}