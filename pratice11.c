#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i=0,count=1;
	printf("enter the string\n\n");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]==' ' || a[i]=='\n'|| a[i]=='\t' ||a[i]=='\v')
		{
			count++;
		}
		i++;
	}
	printf("total words==%d",count);
}
