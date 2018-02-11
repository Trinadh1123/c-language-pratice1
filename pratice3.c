#include<stdio.h>
main()
{
	int n,i,sum=0,a,c;
	float avg=0;
	printf("enter how many numbers you waant to insert");
	scanf("%d",&n);
	printf("enter the input");
	scanf("%d",&a);
	sum=sum+a;
	for(i=0;i<n-1;i++)
	{
		printf("enter the input");
		scanf("%d",&c);
		sum=sum+c;
		if(a>c)
		{
			c=a;
		}
		if(a<c)
		{
			a=c;
		}
	}
		if(a<c)
	{
		printf("sum=%d\nlorge=%d",sum,c);
	}
	else
	{
		printf("sum=%d\nlorge=%d",sum,a);
	}
}
