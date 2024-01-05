/* indirect recursion */
#include<stdio.h>
void funB(int x);// funtion protoyping
void funA(int x)
{    if(x>0)
{
    printf("%d \n",x);
    funB(x-1);
}
}
void funB(int x)
{
    if(x>1)
    {
    printf("%d \n",x);
    funA(x/2);  
    }
}
int main()
{
    int x;
    printf("Enter the number buddy \n");
    scanf("%d",&x);
    funA(x);
    return 0;
}