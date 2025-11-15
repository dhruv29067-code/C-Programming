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
    printf("Addition Of Two Matrics (c): \n");
   for(i=0;i<2;i++){
        for(j=0;j<2;j++){
          printf("C%d%d :%d\n",i+1,j+1,a[i][j]+b[i][j]);  
        }
    }
   
   
    return 0;
}