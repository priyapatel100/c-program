#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
		i++;
	}
	printf("%d\n",sum);
	return 0;
}
