#include<stdio.h>
int main()
{
	int x, y;
	float div_result;
    printf("Input two numbers: ");
	printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    if(y != 0)
    {
   		div_result = x/y;
		printf("%.f\n", div_result);
	}
	else
	{
	 	printf("Division not possible.\n");
    }
    return 0;
}
