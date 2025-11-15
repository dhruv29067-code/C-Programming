#include<stdio.h>
#include<math.h>
int main(){
    int gm;
    printf("enter gm");
    scanf("%d", &gm);

    int Kg = gm / pow(10,3);
    printf("Kg = %d", Kg); 
    return 0;
}