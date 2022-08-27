/*
    Write a C program to print the following pattern:
        a)                  b)
        1                   1
        12                  22
        123                 333 
        1234                4444 
        12345               55555
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("a)\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\nb)\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0 ;
}