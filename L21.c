#include <stdio.h>

int main() {
    int num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }
    while (rev > 0) {
        printf("%d,", rev % 10);
        rev = rev / 10;
    }
 return 0;
}