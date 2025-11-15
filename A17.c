#include<stdio.h>
int main (){
    int n,i,new;
    printf("Enter Total Numbers In array :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d Number :",i+1);
        scanf("%d",&a[i]);
    }
   

    printf("Array Output :\n");
    for (i = 0; i < n-1; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}