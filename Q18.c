#include<stdio.h>
int main(){
    float L,B;
    printf("enter L");
    scanf("%f", &L);

    printf("enter B");
    scanf("%f", &B);

    float A = L * B;
    printf("A : %f\n", A);

    float P = 2 * (L + B);
    printf("P : %f\n", P);
    return 0;

}