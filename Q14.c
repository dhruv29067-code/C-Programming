#include<stdio.h>
int main(){
    float celcius;
    printf("enter celcius value");
    scanf("%f", &celcius);

    float fahrenheit = (1.8 * celcius) + 32;
    printf("fahrenheit : %f", fahrenheit);
    return 0;

}