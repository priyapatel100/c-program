#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	int lastdigit=num%10;
	if(lastdigit%2==0)
	{
		printf("The lastdigit %d is even.\n",lastdigit);
	}
	else
	{
		printf("The lastdigit %d is odd.\n",lastdigit);
	}
	return 0;
}
