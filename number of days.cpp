#include<stdio.h>
int main()
{
	int y,m;
	printf("enter the year \n");
	scanf("%d",&y);
	printf("enter the month");
	scanf("%d",&m);
	if(y%4==0&&(y%100!=0||y%400==0))
	{
		if(m==2)
		printf("29");
	}
	else if(m==2)
	{
		printf("28");
    }
	else if(m%2==0 && m<7)
		printf("30");
	else if(m%2==1 && m<7)
	 printf("31");
    else if (m%2==0 && m>7)
    printf("31");
    else printf("30");
}
    

