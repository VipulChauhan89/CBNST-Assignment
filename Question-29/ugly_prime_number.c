/*
    Find out the ugly prime number
    Desc: The given number is ugly prime number if it's prime factor contains only among 2,3 or 5.
    e.g. 20= 2*2*5 is ugly prime number
    14=2*7 is not a ugly prime number
    So write a C function which takes values from 1 to n and returns 1 if if is ugly prime number else 0
*/
#include<stdio.h>
int ugly(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n<=0)
    {
        return 0;
    }
    if(n%2==0)
    {
        return ugly(n/2);
    }
    if(n%3==0)
    {
        return ugly(n/3);
    }
    if(n%5==0)
    {
        return ugly(n/5);
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number to count the ugly prime numbers in it : ");
    scanf("%d",&n);
    if(ugly(n))
    {
        printf("%d is an ugly prime number\n",n);
    }
    else
    {
        printf("%d is not an ugly prime number\n",n);
    }
    return 0;
}