
#include<stdio.h>
int main()
{
	int i=1,count=0,n;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			count=count+1;
		}
		else
		{
			i=i+1;
		}
	
	}
		if(count==2)
	    {
		printf("Number is prime.");
	    }
	    else
	    {
		printf("Number is not prime.");
 	    }

	return 0;
}
