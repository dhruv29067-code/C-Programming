//Calculate sum and mean of any 10 values.
#include<stdio.h>
int main(){
    int i;
    float n, sum = 0, mean;
    printf("enter 10 value\n");

for(i = 1; i <= 10; i++){
    printf("enter n : ");
    scanf("%f", &n);
    sum = sum + n;
}
mean = sum / 10;

    printf("\nsum = %f\n", sum);
    printf("mean = %f\n", mean);

    return 0;
}