#include<stdio.h>
int main()
{
	int n,oddsum=0,evensum=0,i=1;
	while(i<=5)
	{
		printf("Enter number:");
		scanf("%d",&n);
		if(n%2==0)
		{
			evensum++;
		}
		else
		{
			oddsum++;
		}
		i++;
	}
	printf("Odd sum is %d",oddsum);
	printf("Even sum is %d",evensum);
    return 0;
}
