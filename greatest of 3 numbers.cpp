#include<stdio.h>
int main()
{
	float p,q,r;
	printf("enter the 3 numbers");
	scanf("%f %f %f",&p,&q,&r);
	if(p>q && p>r)
	{
		printf("greatest number is %f",p);
	}
	else if(q>r)
	{
		printf("greatest number is %f",q);
	}
	else 
	{
		printf("greatest number is %f",r);
	}
}
