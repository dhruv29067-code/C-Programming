#include<stdio.h>
int main (){
    int a[4][4],b[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter A%d%d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Transpose Of Matrics A=(B):\n");
   for(i=0;i<4;i++){
        for(j=0;j<4;j++){
          printf("B%d%d :%d\n",i+1,j+1,a[j][i]);  
        }
    }
   
   
    return 0;
}