#include<stdio.h>

    double area(double b,double h)
{
    return 0.5*b*h;


}  
void rectangle (double x, double y)
{
    printf("Your area is : %lf",x*y);
}
int main()
{  
    double base,height;
    printf("Enter base : ");
    scanf("%lf",&base);
    printf("Enter height: ");
    scanf("%lf",&height);
    printf("your area is : %.lf\n",area(base,height));
    double legnth,width;
    printf("Enter length and width ");
    scanf("%lf %lf",&legnth,&width);
    
    rectangle(legnth,width);












    return 0;
}