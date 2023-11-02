#include<stdio.h>
int main()
{
	float x,e;
	printf("enter number of units in KWH of your electricity bill");
	scanf("%f",&x);
	if(x>0 && x<200)
	{
		e=x*5;
		printf("electricity bill is %f",e);
	}
	else if(x>=200 && x<500)
	{
		e=x*10;
		printf("electricity bill is %f",e);
	}
	else
	{
		e=x*15;
		printf("electricity bill is %f",e);
	}
	return 0;
}
