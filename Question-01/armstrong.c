/*
	A number is called an Armstrong number if the sum of the cubes of the digits of the number is equal to the number. 
	For example 153 = 1^3 + 5^3 + 3^3. Write a C program that asks the user to enter a number and returns if it is Armstrong or not (use function).
*/
#include<stdio.h>
void armstrong(int num)
{
	int sum=0,i,rem,n,arm=0;
	n=num;
	while(n>0)
    {
        rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
    }
    if(arm==num)
    {
        printf("%d is an Armstrong Number\n",num);
    }
    else
    {
        printf("%d is not an Armstrong Number\n",num);
    }
}
int main()
{
    int n;
    printf("Enter the number to check if it is an armstrong number or not : ");
    scanf("%d",&n) ; 
    armstrong(n);
    return 0 ;
}