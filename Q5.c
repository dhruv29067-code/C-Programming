#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);
    
    int sum = a + b;
    printf("sum is : %d\n", sum);

    int subtract = a - b;
    printf("subtract is : %d\n", subtract);

    int multiply = a * b;
    printf("multiply is : %d\n", multiply);
    
    int divide = a / b;
    printf("divide is : %d", divide);

    
    return 0;
}