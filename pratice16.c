#include<stdio.h>
main()
{
	int atm=5319,a;
	float bal=9531.1359,c;
	char n,t;
	printf("enter the ATM pin");
	scanf("%d",&a);
	if(a==atm)
	{
		while(1)
		{
			printf("\n\ndo you want to perform the below operations so plese select the related opetion\n1.Balance checking-->b\n2.Cash withdrawal-->c\n3.Cash deposition-->d\n4.TERMINATE THE PROCESS-->t\n\n");
			scanf("%c",&n);
			switch(n)
			{
				case 'b':printf("\nBALANCE=%f\n",bal);
				break;
				case 'c': l:printf("\nenter the AMOUNT::");
						 scanf("%f",&c);
						 if(bal>=c)
						 {
						 	if(c==0)
						 	{
						 		printf("\nenter the valide AMOUNT\n");
							 }
							 else
							 {
							 	bal=bal-c;
							 	printf("\nremaining BALANCE::%f\n",bal);
							 }
						 }
						 else
						 {
						 	printf("in sufficent balance\nPLESE WITHDRAL A SUFFICENT AMOUNT");
						 	goto l;
						 }	
				break;
				case 'd': printf("\nenter the deposition ammount\n");
						  scanf("%f",&c);
						  bal=bal+c;
						  printf("\nfinal BALANCE=%f\n",bal);
				break;
				case 't':exit(0);
				break;
			}
		}
	}
	else
	{
		printf("\nenter a valide pin\n");
	}
}
