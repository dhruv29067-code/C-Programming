// Find out largest and smallest out of 100 nos.
#include<stdio.h>
int main (){
    int i;
    float n,largest,smallest;
    printf("enter number");
    scanf("%f", &n);
    largest=smallest=n;

    for(i=2; i <= 100; i++){
        printf("enter number %d: ", i);
        scanf("%f", &n);

        if(n>largest)
        largest=n;
        else
        if(n<smallest)
        smallest=n;
    }
    printf("\nlargest number = %f", largest);
    printf("\nsmallest number =%f", smallest);
    return 0;
}