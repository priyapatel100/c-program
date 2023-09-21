#include<stdio.h>
int main()
{
	int num;
	printf("Enter the month number(1 to 12):");
	scanf("%d",&num);
	switch(num)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			printf("The month has 31 days.");
			break;
		case 4:case 6:case 9:case 11:
			printf("The month has 30 days.");
			break;
		case 2:
			printf("The month has either 28 or 29 depand on leap year.");
			break;
		default:
			printf("Invalid month please enter month number(1 to 12)");
	}
	return 0;
}
