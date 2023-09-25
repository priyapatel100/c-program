#include<stdio.h>
int main()
{
    int n,sum=0,i=0,var;
    printf("\nEnter number: ");
    scanf("%d",&n);
    while(i<n)
    {
        printf("Enter No [%d]:",i+1);
        scanf("%d",&var);
        sum=sum+var;
        i++;
    }
    printf("\n Sum = %d",sum);
    printf("\n average = %f",((float)sum)/n);
    return 0;
}
