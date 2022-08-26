/*
    Write a C program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone. Ask the user which one s/he wants to calculate, and take the appropriate required inputs. 
    Then print the result. The input should be taken in the main function and calculations for every solid should be done in a separate function by passing appropriate arguments.
    Example:
        If the user chooses the option for cube, only one input is required i.e., the side. The volume is then calculated and printed.
        If the user chooses the option for cuboid, only three inputs are required i.e., length, breadth and height. The volume is then calculated and printed.
*/
#include<stdio.h>
# define PI 3.14159
int cube_volume(int a)
{
    return a*a*a;
}
int cuboid_volume(int l,int b,int h)
{
    return l*b*h;
}
double sphere_volume(double r)
{
    return (4/3.0)*PI*r*r*r;
}
double cone_volume(double r, int h)
{
    return (1/3.0)*PI*r*r*h;
}
double cylinder_volume(double r, int h)
{
    return PI*h*r*r;
}
int main()
{
    int ch,l,b,a,h;
    double r;
    do{
        printf("\nEnter the choice to calculate the volume of:\n1.Cube\n2.Cuboid\n3.Sphere\n4.Cylinder\n5.Cone\n0.Exit\n");
        printf("Enter your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
                printf("Enter Side of the cube : ");
                scanf("%d",&a);
                printf("The Volume of Cube : %d\n",cube_volume(a));
                break ;
            case 2: 
                printf("Enter the length, breadth and height of the cuboid : ");
                scanf("%d%d%d",&l,&b,&h);
                printf("The Volume of Cuboid : %d\n",cuboid_volume(l,b,h));
                break ;
            case 3: 
                printf("Enter Radius of the sphere : ");
                scanf("%lf",&r);
                printf("The Volume of Sphere : %lf\n",sphere_volume(r));
                break ;
            case 4: 
                printf("Enter Radius and Height of the cylinder : ");
                scanf("%lf%d",&r,&h);
                printf("The Volume of Cylinder : %lf\n",cylinder_volume(r,h));
                break ;
            case 5: 
                printf("Enter Radius and Height of the cone : ");
                scanf("%lf%d",&r,&h);
                printf("The Volume of Cone : %lf\n",cone_volume(r,h));
                break ;
            default: 
                printf("You entered the wrong choice.\n");
                break;
        }
    }while(ch!=0);
    return 0 ;
}