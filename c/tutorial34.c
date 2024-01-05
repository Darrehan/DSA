/* tower of hannoi using recursion */
#include<stdio.h>
void TOH(int d, char t1, char t2, char t3)
{
if(d==1)
{
printf("%c to %c",t1,t3);
return;
}
TOH(d-1,t1,t3,t2);
printf("\n%c to %c\n",t1,t2);
TOH(d-1,t3,t2,t1);
}
int main()
{
int disk;
printf("Enter the number of disks:");
scanf("%d",&disk);
if(disk<1)
printf("There are no disks to shift");
else
printf("there are %d disks in tower 1 \n",disk);
TOH(disk, '1','2','3');
return 0;
}