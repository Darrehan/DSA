// arrays basic abstract data type operation on array
#include <stdio.h>
#include<stdlib.h>
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
    for(int i=0;i<arr.length;i++)
    {
        printf("%d",arr.a[i]);
    }
}
int main()
{
    int n;
    struct array arr;
    printf("enter the size of an array \n");
    scanf("%d", &arr.size);
    arr.a = (int *)malloc(arr.size*(sizeof(int)));
    arr.length = 0;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.a[i]);
    }
arr.length=n;
display(arr);
    return 0;
}
