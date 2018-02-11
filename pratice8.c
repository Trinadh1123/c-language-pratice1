#include <stdio.h>
int main(void)
{
int num;
m:printf("Enter your mark ");
scanf("%d",&num);
//printf(" You entered %d", num);
if(num>=91 && num<=93)
{
printf("grade is A-");
}
 else if(num>93 && num<98)
{
printf("grade is A");
}
 else if(num>97 && num<=100)
{
printf("grade is A+");
}


else if(num>=81 && num<=83)
{
printf("grade is B-");
}
 else if(num>83 && num<88)
{
printf("grade is B");
}
 else if(num>87 && num<=90)
{
printf("grade is B+");
}

else if(num>=70 && num<=73)
{
printf("grade is C-");
}
 else if(num>73 && num<78)
{
printf("grade is C");
}
 else if(num>77 && num<=80)
{
printf("grade is C+");
}

else if(num>=60 && num<=63)
{
printf("grade is D-");
}
 else if(num>63 && num<68)
{
printf("grade is D");
}
 else if(num>67 && num<=70)
{
printf("grade is D+");
}
else if(num>(-1) && num<=60)
{
	printf("grade is F");
}
else
{
	printf("enter a valid marks\n");
	goto m;
}
}

