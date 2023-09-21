#include<stdio.h>
int main()
{
	int i=1,n,a=1;
	printf("Enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		a*=i;
		i++;
	}
	printf("%d",a);
	return 0;
}
