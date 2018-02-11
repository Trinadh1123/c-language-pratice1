#include<stdio.h>
main()
{
	int sec,hr,min,t;
	a:printf("enter time in sec");
	scanf("%d",&sec);
	if(sec>=0)
	{
	hr=sec/3600;
	sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	printf("time is %d hrs %d mins %d secs",hr,min,sec);
	}
	else
	{
		printf("enter a valid time\n");
		goto a;
	}
}
