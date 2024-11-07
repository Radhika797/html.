#include<stdio.h>
int main()
{
float a,r,c;
printf("enter the value of radius");
scanf("%f",&r);
a=3.14*r*r;
c=2*3.14*r;
printf("the area of circle is =%.2f",a);
printf("the area of circumfurrence is =%.2f",c);
return 0;
}
