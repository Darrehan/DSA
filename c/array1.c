/* array as a parameter*/
#include <stdio.h>          // funtion definition
void array(int A[], int n); //  instead of A[] ,we can also write *A
int main()
{
    int n;
    printf("Enter the size of an array \n");
    scanf("%d", &n);
    int A[n];
    array(A, n);
    return 0;
}
void array(int A[], int n)
{
    printf("Enter the Elements in the array < n \n");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("\n value = %d", A[i]);
    }
}