#include<stdio.h>
int main()
{
	float height,base,area;
	printf("Enter the height of the triangle:");
	scanf("%f",&height);
	printf("Enter the base of the triangle:");
	scanf("%f",&base);
	area=(height*base)/2;
	printf("The area of tringle is %f",area);
	return 0;
}
