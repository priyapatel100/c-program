#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		i=i+1;
	}
	return 0;
}
