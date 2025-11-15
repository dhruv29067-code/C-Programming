#include<stdio.h>
int main(){
    float dollars;
    printf("enter the full amount of dollars");
    scanf("%f", &dollars);

    float pounds = dollars * 70 / 48;
    printf("pounds = %f", pounds); 
    return 0;
}