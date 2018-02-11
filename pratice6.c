#include<stdio.h>
#include<string.h>
main()
{
	int i;
	float f;
	char c;
	printf("enter the integer data");
	scanf("%d",&i);
	printf("enter the float data");
	scanf("%f",&f);
	printf("enter the charecter data");
	scanf("%s",c);
	printf("integer=%f\nfloat=%d\nchar=%d",(float)i,(int)f,(int)c);
}
