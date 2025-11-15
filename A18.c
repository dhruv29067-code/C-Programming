#include <stdio.h>
int main() {
    int n, i,value;
    printf("Enter Total Numbers In array :");
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter %d Number :", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter Value To Delete : ");
    scanf("%d", &value);

    printf("Array Output :\n");
       for(i=0;i<n;i++){
        if(a[i]==value){
            continue;
        }
        else printf("%d ",a[i]);
       }
    

    return 0;
}