#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("a is largest.");
	}
	else if(b>a && b>c)
	{
		printf("b is largest.");
	}
	else
	{
		printf("c is largest.");
	}
	return 0;
}
