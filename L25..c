#include <stdio.h>

int main() {
    int n, a, b = 0, o;

    printf("Enter a number: ");
    scanf("%d", &n);

    o = n;

    while (n>0) {
        a = n % 10;          
        b = b * 10 + a;      
        n = n / 10;       
    }

    if (o == b)
        printf("%d is a Palindrome number.\n", o);
    else
        printf("%d is NOT a Palindrome number.\n", o);

    return 0;
}