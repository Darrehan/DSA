/* passing array as call by value with the help of structure*/
#include<stdio.h>
struct rectangle
{
    int A[10];
    int n;
};
 void fun(struct rectangle r1)
{
    r1.A[0]=8;
    r1.A[1]=8;
    r1.A[2]=8;
    r1.A[3]=8;
    r1.A[4]=8;
    r1.A[5]=8;
    r1.A[6]=8;
    r1.A[7]=8;
    r1.A[8]=8;
    r1.A[9]=8;
    r1.n=55;
 for(int i=0;i<=9;i++)
    {
        printf("%d \n",r1.A[i]);
    }
     printf("int value = %d \n",r1.n);
}
int main()
{
    struct rectangle r={{1,2,3,4,5,6,7,8,9,4},6};
    for(int i=0;i<=9;i++)
    {
        printf("%d \n",r.A[i]);
    }
     printf(" int value = %d \n",r.n);
    fun(r);
    printf("Actual parameters of will not change\n");
    for(int i=0;i<=9;i++)
    {
        printf("%d \n",r.A[i]);
    }
     printf("int value = %d \n",r.n);
    return 0;
}