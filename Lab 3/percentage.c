#include<stdio.h>
int main()
{
	float per;
	int a,b,c,d,e;
	printf("Enter your marks: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	per=((a+b+c+d+e)/5.0);
	if(per<=35)
    {
    	printf("Fail");
	}
	else if(per>35 && per<=45)
	{
		printf("Pass");
	}
	else if(per>45 && per<=60)
	{
		printf("Second class");
	}
	else if(per>60 && per<=70)
	{
		printf("First class");
	}
	else if(per>70)
	{
		printf("Distriction");
	}
	return 0;
}
