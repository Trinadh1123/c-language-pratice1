
#include<stdio.h>
main()
{
	int hr,min,sec,min1;
	a: printf("enter time in hrs and min");
	scanf("%d%d",&hr,&min);
	if(hr>-1 && min>-1)
	{
	sec=(min*60)+(hr*3600);
	min1=(hr*60)+min;
//	printf(" seconds=%d",sec);
//	printf("minites=%d",min);
	printf("%d hours  %d minutes=%d\nsec=%d",hr,min,min1,sec);
	}
	else
	{
		printf("in valide time re enter the data\n");
		goto a;
	}
}
