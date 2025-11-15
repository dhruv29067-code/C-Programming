#include <stdio.h>
int main() {
    int n, i, pos;
    printf("Enter Total Numbers In array :");
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter %d Number :", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter Position To Delete (1 to %d): ", n);
    scanf("%d", &pos);

    
    for (i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--; 

    printf("Array Output :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}