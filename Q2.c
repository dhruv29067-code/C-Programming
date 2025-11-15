#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);
    
    int subtract = a - b;
    printf("subtract is : %d", subtract);
    return 0;
}
