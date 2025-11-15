#include<stdio.h>
int main(){
    float P,R,N;
    printf("enter P");
    scanf("%f", &P);

    printf("enter R");
    scanf("%f", &R);

    printf("enter N");
    scanf("%f", &N);

    float interest = (P * R * N) / 100;
    printf("interest : %f", interest);
    return 0;
}