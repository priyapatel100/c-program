#include<stdio.h>
int main()
{
     int number;
	 printf("Enter the number: ");
	 scanf("%d",&number);
	 if(number%2==0)
	 {
	    printf("This number is even.\n");
	 }	
	 else
	 {
		printf("This number is odd.\n");
	 }
	 return 0;
}
