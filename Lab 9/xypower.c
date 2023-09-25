#include<stdio.h>
int main()
{
	int i,x,y,ans;
    ans=1;
    printf("\nEnter the value of x");
    scanf("%d", &x);
    printf("\nEnter the value of y");
    scanf("%d", &y);
    for(i=1; i<=y; i++)
    {
       ans= ans*x;
    }
    printf(" %d to the power %d is %d",x,y,ans);
    return 0;
}
