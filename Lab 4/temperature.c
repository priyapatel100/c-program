#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("Enter the tem of fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(((fahrenheit-32)*5)/9);
	printf("tem in celsius is %f",celsius);
	return 0;
}
