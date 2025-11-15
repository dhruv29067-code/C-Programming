#include <stdio.h>
int main() {
    int n, i, new, newpos;

    printf("Enter Total Numbers In array : ");
    scanf("%d", &n);

    int a[n+1];  

    for (i = 0; i < n; i++) {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter New Number Position : ");
    scanf("%d", &newpos);

    printf("Enter New Number : ");
    scanf("%d", &new);

    
    for (i = n; i > newpos-1; i--) {
        a[i] = a[i - 1];
    }

    a[newpos-1] = new; 
    n++;

    printf("New Array : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}