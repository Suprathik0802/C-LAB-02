#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the 3 numbers",a,b,c);
	scanf("%f %f %f",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("equal");
	}
	else
	{
		printf("not equal");
	}
	return 0;
}
