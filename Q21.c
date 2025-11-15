#include<stdio.h>
#include<math.h>
int main()
{
   float g,a,d;
   printf("enter the gross salary");
   scanf("%f", &g);

   a = 0.10 * g;
   d = 0.03 * g;
   float net_salary = g + a - d;
   printf("net_salary : %f\n", net_salary);
   return 0;
}