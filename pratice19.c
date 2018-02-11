#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int i=0,k,count=0;
	char u[20],p[20],ch;
	printf("enter the user name:");
	gets(u);
	printf("enter the password:");
	while (1) 
    {	
      	l: ch = getch();
      	 
       if (ch == 13)
         break;
         if (ch == 8)
          {
          	if(strlen(p)!=0)
          	{
          	 //printf("%c",ch);
             printf("\b");
             //putch(" ");
            // printf("%c",ch);
             //putch('\b');
            // putch(" ");
			count++;
			 //putch('\b');
			i--;
			p[i]='\0';
            goto l;
			}
			//	for( k=0;k<strlen(p);k++)
			//	p[k]='\0';
	      }
	     p[i] = ch;
         ch='*';
         printf("%c",ch);
         i++;
          p[i] = '\0'; 
    }
   
    printf("\n\nUSER=%s",u);
		//puts(u);
		printf("\n\nPASSWORD= %s",p);
}
