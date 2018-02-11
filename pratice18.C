#include<stdio.h>
void main()
{
 int n,year;
 printf("Enter Year:\n");
 scanf("%d",&n);
 year=n%100;
 printf("Last 2 Digits in Ur entered year is:\n%02d",year);
}
