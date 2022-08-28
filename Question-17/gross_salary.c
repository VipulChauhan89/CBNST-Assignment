/*
    Write a C program to accept the basic salary of an employee from the user. Calculate the gross salary on the following basis:
        Basic            HRA        DA
        1 - 4000         10%        50% 
        4001 - 8000      20%        60% 
        8001 - 12000     25%        70% 
        12000 and above  30%        80%
*/
#include<stdio.h>
int main()
{
    double salary;
    double net; 
    printf("Enter Salary : ");
    scanf("%lf",&salary);
    if(salary>0 && salary<=4000)
    {
        net=salary+(salary*0.1)+(salary*0.5);
    }
    else if(salary>4000 && salary<=8000)
    {
        net=salary+(salary*0.2)+(salary*0.6);
    }
    else if(salary>8000 && salary<=12000)
    {
        net=salary+(salary*0.25)+(salary*0.7);
    }
    else if(salary>12000)
    {
        net=salary+(salary*0.3)+(salary*0.8);
    }
    printf("Net Salary = %f\n",net);
    return 0;
}