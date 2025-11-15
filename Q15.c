#include<stdio.h>
#include<math.h>
int main(){
    float fahrenheit;
    printf("enter fahrenheit value");
    scanf("%f", &fahrenheit);

    float celcius = (fahrenheit - 32) * 5 / 9;
    printf("celcius : %f", celcius);
    return 0;

}