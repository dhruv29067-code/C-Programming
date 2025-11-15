#include<stdio.h>
int main(){
    float dollars;
    printf("enter full amount of dollars");
    scanf("%f", &dollars);

    float Rs = dollars * 48;
    printf("Rs : %f", Rs);

    return 0;
}