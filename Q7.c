#include<stdio.h>
int main(){
    float Minute;
    printf("Enter Minute");
    scanf("%f", &Minute);

    float Hour = Minute / 60;
    printf("Hour is : %f", Hour);
    return 0;
}