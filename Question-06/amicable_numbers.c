/*
    Amicable numbers are found in pairs. A given pair of numbers is Amicable if the sum of the proper divisors (not including itself) of one number is equal to the other number and vice – versa. 
    For example 220 & 284 are amicable numbers
    First we find the proper divisors of 220:
                220:1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110
                    1+ 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
                Now, 284: 1, 2, 4, 71, 142
                    1 + 2 + 4 + 71 + 142 = 220
    Write a C program to check that the input pair of numbers is amicable.
*/
#include<stdio.h>
int main()
{
    int num1,num2,n,i,j,sum1=0,sum2=0;
    printf("Enter two numbers to check for amicable numbers : ");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1/2;i++)
    {
        if(num1%i==0)
        {
            sum1+=i;
        }
    }
    for(i=1;i<=num2/2;i++)
    {
        if(num2%i==0)
        {
            sum2+=i;
        }
    }
    if(sum1==num2 && sum2==num1){
        printf("Numbers are Amicable\n");
    }
    else
    {
        printf("Numbers are not Amicable\n");
    }
    return 0;
}