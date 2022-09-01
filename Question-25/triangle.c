/*
    Write 2 different C functions to compute area and perimeter of a triangle whose sides a,b, and c are given by user as inputs.
    Formula to compute perimeter = a + b + c 
    Formula to compute area = [s(s-a)(s-b)(s-c)]0.5 Where s = 0.5 * (a+b+c)
    Function prototypes are:
        double perimeter(double a, double b, double c) 
        double area(double a, double b, double c)
    Your program should read the input data and print the output data via separate functions. 
    The prototypes are:
        double read_input()
        double print_value(double val)
    use math.h and compile with -lm flag
*/
#include<stdio.h>
#include<math.h>
double perimeter(double a,double b,double c)
{
    return (a+b+c);
}
double area(double a,double b,double c)
{
    float s=(a+b+c)/2.0;
    double ar=sqrt((s*(s-a)*(s-b)*(s-c)));
    return ar;
}
void print_value(double peri,double ar)
{
    printf("The Perimeter is : %lf\n",peri);
    printf("The Area      is : %lf\n",ar);
}
void read_input()
{
    double a,b,c;
    printf("Enter the sides of the triangle : ");
    scanf("%lf%lf%lf",&a,&b,&c);
    print_value(perimeter(a,b,c),area(a,b,c));
}
int main()
{
    read_input();

    return 0 ;
}