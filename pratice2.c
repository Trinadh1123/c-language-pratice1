#include <stdio.h>
#include<stdlib.h>
int main()
{
	int age;
	float height;
	char name[30],address[100];
	printf("Enter name: \n");
	gets(name);
	printf("Enter address: \n");
	gets(address);
	l:{	printf("Enter age: \n");
	scanf("%d",&age);
	}
	if(age>0)
	{
	m:{	printf("Enter height in feet: \n");
		scanf("%f",&height);
	  }
	  if(height>0)
	{
	printf("NAME::");
	puts(name);
	printf("ADDRESS::");
	puts(address);
	printf("\nAge: %d\n",age);
	printf("\nHeight=%0.2f",height);
	}
	else{
		printf("invalid height\n");
		goto m;
	}
	}	
else
	{
		printf("invalid age\n");
		goto l;
	}
}
