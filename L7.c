#include<stdio.h>
int main(){
    int i,n,sum = 0,v;
    printf("enter n : ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        printf("enter no %d : ", i);
        scanf("%d", &v);
        sum = sum + v;
    }
    printf("sum is : %d\n", sum);
    return 0;
    
}