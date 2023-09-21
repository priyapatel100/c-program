#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a''z':
		case 'A''Z':
			printf("%c is an alphabate.\n",ch);
			break;
		default:
			printf("%c is a not alphabate.",ch);
			break;
	}
	return 0;
}
