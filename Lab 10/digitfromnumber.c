#include <stdio.h>
#include <math.h>
int main()
{
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
	{
        count++;
        n = n/10;
    }
    printf("No. of digits = %d", count);
    return 0;
}

