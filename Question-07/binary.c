/*
    Write a C function for the following problem:
    Given a positive integer n, print the binary representation of n.
*/
#include<stdio.h>
void binary(int n)
{
    int arr[1000];
    int count=0,i,num=n;
    /*
    while(num>0)
    {
        arr[count]=num%2;
        count++;
        num=num/2;
    }
    */
    while(num>0)
    {
        arr[count]=num&1;
        count++;
        num=num/2;
    }
    printf("Binary Representation of %d is : ",n);
    for(i=count-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the positive number : ");
    scanf("%d",&n);
    binary(n);
    return 0;
}