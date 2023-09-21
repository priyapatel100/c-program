#include<stdio.h>
int main()
{
	int num1,num2,num3,largest,result;
	printf("Enter three number:");
	scanf("%d %d %d",&num1,&num2,&num3);
	largest=(num1>num2)?num1:num2;
	switch (num3)
	{
		case '0':
			printf("Cannot multiply by zero.");
			break;
		default:
			result=largest*num3;
			printf("%d",result);
			break;
	} 
	return 0;
}
