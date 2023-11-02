#include<stdio.h>
int main()
{
	int a,m,p,c,b,cp;
	printf("enter the marks of five subjects");
	scanf("%d %d %d %d %d",&m,&p,&c,&b,&cp);
	a=(m+p+c+b+cp)/5;
	printf("percentage is %d%%",a);
	if(a>=90)
	{
	printf(":grade A");
    }
	else if(a>=80)
	{
		printf(":grade B");
	}
	else if(a>=70)
	{
		printf(":grade C");
	}
	else if(a>=60)
	{
		printf(":grade D");
	}
	else if(a>=40)
	{
		printf(":grade E");
	}
	else
	printf(":grade F");
}
