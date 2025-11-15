#include <stdio.h>


int main() {
    int n, a, b, o;

    printf("Enter a number: ");
    scanf("%d", &n);

    o = n;
int sum=0;
    while (n>0) {
        a = n % 10;          
         b=a*a*a;
        sum=sum+b;   
        n = n / 10;       
    }

    if (o == sum)
        printf("%d is a Armstrong number.\n", o);
    else
        printf("%d is NOT a Armstrong  number.\n", o);

    return 0;
}