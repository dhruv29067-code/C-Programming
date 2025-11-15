#include<stdio.h>
int main()
{
   float sub1,sub2,sub3;
   printf("enter the marks of sub1");
   scanf("%f", &sub1);

   printf("enter the marks of sub2");
   scanf("%f", &sub2);

   printf("enter the nmarks of sub3");
   scanf("%f", &sub3);

   float total = sub1 + sub2 + sub3;
   printf("total : %f\n", total);

   float average = total / 3.0;
   printf("average : %f\n", average);
   return 0;
}