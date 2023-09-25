#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			printf("%d",i);
			sum=sum+1;
		}
	}
	if(sum==n)
	{
		printf("%d is a perfact number.");
	}
	else
	{
		printf("%d is a not perfact number.");
	}
	return 0;
}
