#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	c=b;
	b=a;
	a=c;
	printf("%d %d",a,b);
	return; 
}
