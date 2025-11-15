#include<stdio.h>
#define Pi 22 / 7
int main(){
    float R;
    printf("enter R");
    scanf("%f", &R);

    float A = R * R * Pi;
    printf("A : %f", A); 
    return 0;
}