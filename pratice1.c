/** Program to find sum and product of two numbers
	and sum of individual product of two numbers*/

/* inclusion of header file stdio.h */

#include<stdio.h>

int main(void)
{
	
	int a;
	int b;
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
	printf("The sum of two numbers is: %d \n",a+b);
	printf("The product of two numbers is: %d\n",a*b);
	printf("The sum of the squares of two numbers is: %d",((a*a)+(b*b)));
	return 0;

}
