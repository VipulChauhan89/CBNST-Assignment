/*
    Write a C program to sort an array of integers using bubble sort.
*/
#include<stdio.h>

int main()
{
    int n,i,j,t;
    printf("Enter the number of numbers you want to enter in an array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //Bubble Sort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("Array after bubble sort : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0 ;
}