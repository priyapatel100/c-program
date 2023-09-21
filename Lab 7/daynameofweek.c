#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number(1 to 7):");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
		printf("MONDAY");
		break;
	case 2:
	    printf("TUESDAY");
		break;
	case 3:
		printf("WEDNESDAY");
		break;
	case 4:
		printf("THRUSDAY");
		break;
	case 5:
		printf("FRIDAY");
		break;
	case 6:
		printf("SATURDAY");
		break;
	case 7:
		printf("SUNDAY");
		break;
	default:
		printf("Invalid day please enter the number(1 to 7)");
	}
	return 0;	
}
