//Calculate sum and mean of any n values
#include<stdio.h>
int main(){
    int i,n;
    float sum = 0, mean,v;
    printf("enter n values\n");
    scanf("%d",&n);

for(i = 1; i <= n; i++){
    printf("enter n %d: ", i);
    scanf("%f", &v);
    sum = sum + v;
}
mean = sum / n;

    printf("\nsum = %f\n", sum);
    printf("mean = %f\n", mean);
    return 0;
}