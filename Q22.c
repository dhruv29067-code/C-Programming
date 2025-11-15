#include<stdio.h>
int main()
{
   float g;
   printf("enter the gross sales");
   scanf("%f", &g);

   float net_sales = g - 0.1 * g;
   printf("net_salary : %f\n", net_sales);
   return 0;
}