#include<stdio.h>
#include<math.h>
int main(){
    int Kg;
    printf("enter Kg");
    scanf("%d", &Kg);

    int gm = Kg * pow(10,3);
    printf("gm = %d", gm); 
    return 0;
}