#include <stdio.h>

int main() {
    int n,i,value,found = 0;

    printf("Enter total numbers in array: ");
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++) {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++) {
        if(a[i] == value) {
            printf("Value %d is founded at position %d\n", value, i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Value %d not found in array\n", value);
    }

    return 0;
}