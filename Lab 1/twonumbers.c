#include<stdio.h>
int main()
{
	int a,b,d;
	char c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter symbol(+,-,*,/):");
	scanf(" %c",&c);
	if(c=='+')
	{
		d=a+b;
		printf("sum is a+b =%d",d);
	}
	if(c=='-')
	{
		d=a-b;
		printf("sum is a-b =%d",d);
	}
	if(c=='*')
	{
		d=a*b;
		printf("sum is a*b =%d",d);
	}
	if(c=='/')
	{
		if(b!=0)
		{
			d=a/b;
			printf("sum is a/b =%d",d);
		}else{
			printf("Enter Valid B");
		}
	}
	return 0;
}

