#include<stdio.h>
int main(){
    float L;
    printf("enter length");
    scanf("%f", &L);

    float A = L * L;
    printf("A : %f", A);

    float P = 4 * L;
    printf("P : %f", P);
    return 0;
}