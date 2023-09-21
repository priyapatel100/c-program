#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("Enter your choice(+,-,*,/): ");
	scanf("%c",&ch);
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	if(ch=='+')
	{
		c=a+b;
		printf("sum is a+b= %d",c);
	}
	else if(ch=='-')
	{
		c=a-b;
		printf("sum is a-b= %d",c);
	}
	else if(ch=='*')
	{
		c=a*b;
		printf("sum is a*b= %d",c);
	}
	else if(ch=='/')
	{
		c=a/b;
		printf("sum is a/b= %d",c);
	}
	return 0;
}
