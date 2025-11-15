#include<stdio.h>
int main(){
    float Rs;
    printf("enter full amount of Rs");
    scanf("%f", &Rs);

    float Dollars = Rs / 48;
    printf("Dollars : %f", Dollars);

    return 0;
}