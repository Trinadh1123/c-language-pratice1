#include <stdio.h>
int main()
{
 float hours, rate, salary, overtime, overtimePay;
  printf( "Enter number of hours worked:\n " );
  scanf( "%f", &hours );
  if (hours==-1)
  {
   return 0;
  }
  printf("Enter hourly rate of the worker:\n");
  scanf("%f",&rate );
  salary = hours * rate;
  if(hours<=40)
  {
   printf( "Salary is %.2f\n", salary );
  }
  if(hours>40)
  {
   overtime = hours - 40;
   overtimePay = overtime * rate / 2;
   salary = salary + overtimePay;
   printf( "Salary is %.2f\n", salary );
  }

return 0;
}