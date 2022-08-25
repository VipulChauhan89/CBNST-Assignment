/*
    Write a C program to input n numbers in an array, calculate the sum of all even numbers and all odd numbers in the array and print the larger sum.
    Example: If the array contains the following elements: 2, 3, 3, 5, 4, 8, 7, 11, 2 The sum of all even elements is 2+4+8+2=16 
    Sum of all odd elements is 3+3+5+7+11=29 Therefore, the output should be 29.
*/
#include<stdio.h>
int main()
{
    int n,i,j,even=0,odd=0;
    printf("Enter the number of number you want to enter in an array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even+=arr[i];
        }
        else
        {
            odd+=arr[i];
        }
    }
    printf("Sum of Even No. : %d \n",even);
    printf("Sum of Odd  No. : %d \n",odd);
    if(odd>even)
    {
        printf("Greater sum = %d\n",odd);
    }
    else
    {
        printf("Greater sum = %d\n",even);
    }
    return 0 ;
}