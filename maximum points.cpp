#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the points of bowling technique");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
	printf("max point value is %d",a);
    }
    else if(b>c)
    {
    	printf("max point value is %d",b);
	}
	else
	{
		printf("max point value is %d",c);
	}
}
