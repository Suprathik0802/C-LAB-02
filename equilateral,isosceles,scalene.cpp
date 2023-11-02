#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the sides of triangle");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b&&b==c)
	printf("equilateral");
else if (a!=b&&b!=c)
	printf("scalene");
else 
   printf("isosceles");
}
