/*
    Write a program in C that takes as input a set of numbers and calculates the mean, variance and standard deviation. 
    (variance is defined as Σ[(xi-x̅ )^2]/n-1, where xi=i th number in the set, x̅ is the mean and n=cardinality of the set;standard deviation is the square root of variance).
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,i,rem,num,arm=0;
    printf("Enter the number of numbers you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    float mean=0;
    printf("Enter %d numbers : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        mean+=arr[i];
    }
    mean=mean/n;
    // Variance 
    float var=0 ;
    for(i=0;i<n;i++)
    {
        var+=pow(arr[i]-mean,2);
    }
    var=var/n;
    float sd=sqrt(var);
    printf("Mean     = %0.2f\n",mean) ;
    printf("Variance = %0.2f\n",var) ;
    printf("S.D.     = %0.2f\n",sd) ;
    return 0 ;
}