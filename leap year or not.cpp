#include<stdio.h>
int main()
{
	int m;
	printf("enter the year");
	scanf("%d",&m);
	if(m%4==0&&(m%100!=0||m%400==0))
	{
		printf("it is a leap year");
	}
	else
	{
		printf("it is not a leap year");
	}
	return 0;
}
