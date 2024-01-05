// simple linear search 
#include<stdio.h>
#include<stdlib.h>
struct array 
{
int *a;
int size;
int length;
};
void display(struct array arr)
{ 
    for(int i=0;i<arr.length;i++)
    {  
          printf("index = %d element = %d \n",i ,arr.a[i]);
    
    }
}
int linearsearch(struct array arr,int key )
{
    for(int i=0;i<arr.length;i++)
    {
     if(key== arr.a[i])
    return i;
    }
    return -1;
}

int main()
{  int n,key;
    struct array arr;
    printf("enter the size of an array \n");
    scanf("%d",&arr.size);
    arr.a=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;
    printf("enter the number of elements buddy \n");
    scanf("%d",&n);
    printf("enter the all elements of array buddy \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr.a[i]);
    }
   arr.length=n; 
   printf("enter the elements you want search buddy \n");
   scanf("%d",&key);
   printf("element is present at index = %d \n",linearsearch(arr,key));
   display(arr);
   return 0;
}