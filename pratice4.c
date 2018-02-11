/*Write a c program to input and print the age which should be greater than 18 and less than 30,
 age check should be there and input age recursively until age value is not valid (use goto statement).*/
 #include<stdio.h>
 main()
 {
 	int a;
	b:printf("enterthe age::");
 	scanf("%d",&a);
 	if(a>18 && a<30)
 	{
 		printf("AGE=%d\n",a);
 	
	}
	else
	{
		printf("invalid AGE\n\n");
			goto b;
	}
 }
