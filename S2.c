#include <stdio.h>
#include <string.h>

int main() {
    char a[100];

    printf("Enter a string: ");
    gets(a);   

    printf("Lowercase string: %s\n", strlwr(a));

    return 0;
}