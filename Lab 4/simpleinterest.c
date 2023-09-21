#include<stdio.h>
int main()
{
	float principal,interest,time;
	printf("Enter the principal amount:");
	scanf("%f",&principal);
	printf("Enter the rate of intrest:");
	scanf("%f",&interest);
	printf("Enter the time(in year):");
	scanf("%f",&time);
	float simpleinterest=(principal*interest*time)/100;
	printf("The simple interest is %f",simpleinterest);
	return 0;
}
