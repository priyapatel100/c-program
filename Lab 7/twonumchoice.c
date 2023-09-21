#include<stdio.h>
int main()
{
	float a,b,result;
	char choice;
	printf("Enter your choice(+,-,*,/):");
	scanf("%c",&choice);
	printf("Enter two numbers:");
	scanf("%f %f",&a,&b);
	switch(choice)
	{
		case '+':
			printf("The sum of a+b= %f",a+b);
			break;
		case '-':
			printf("The sum of a-b= %f",a-b);
			break;
		case '*':
			printf("The sum of a*b= %f",a*b);
			break;
		case '/':
			printf("The sum of a/b= %f",a/b);
			break;
		default:
			printf("Invalid choice");		
	}
	return 0;
}
