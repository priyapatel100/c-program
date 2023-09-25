
#include<stdio.h>
int main()
{
	int n,a,num=0,n1;
	scanf("%d",&n);
	n=n1;
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		num=num*10+a;
	}
	if(num==n1)
	{
		printf("It is a palindrome.");
	}
	else
	{
		printf("It is not palindrome.");
	}
	return 0;
}
