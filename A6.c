#include<stdio.h>
int main (){
    int a[2][2],b[2][2],c[2][2],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter A%d%d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter B%d%d :",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    int mul[2][2];
    printf("Multiplication of two matrices (c):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            mul[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
            printf("c%d%d:%d \n",i+1,j+1 ,mul[i][j]);
        }
        
    }
   
   
    return 0;
}