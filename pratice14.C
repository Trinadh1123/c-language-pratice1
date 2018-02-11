//Write a C program to find the frequency of characters in a string//
#include <stdio.h>
#include<conio.h>
int main()
{
 char str[500], ch;
 int i, freq = 0;
 clrscr();
 printf("Enter a string: ");
 gets(str);
 printf("Enter a character to find the frequency: ");
 scanf("%c",&ch);
 for(i=0;str[i]!='\0';++i)
 {
  if(ch == str[i])
  ++freq;
 }
 printf("Frequency of %c = %d",ch,freq);
 return 0;
}