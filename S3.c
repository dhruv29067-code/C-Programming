#include <stdio.h>
#include <string.h>

int main() {
    char a[100];

    printf("Enter a string: ");
    gets(a);   

    printf("Upper string: %s\n", strupr(a));

    return 0;
}