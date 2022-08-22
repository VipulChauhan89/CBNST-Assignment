/*
    Write a C program to display and find the sum of the series 1+11+111+....111 upto n. 
    For eg. if n=4, the series is : 1+11+111+1111. Take the value of 'n' as input from the user.
*/
#include<stdio.h>
int main()
{
    unsigned long long int n,i,sum=0;
    printf("Enter the value of n : ");
    scanf("%llu",&n);
    printf("Sum of Series is : ");
    for(i=1;i<=n;i++)
    {
        sum=sum*10+i;
    } 
    printf("%llu\n",sum);
    return 0;
}