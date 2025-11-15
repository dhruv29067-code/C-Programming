#include<stdio.h>
int main(){
int a[4][4],ans[16];
int i,j,temp;
printf("Enter Matrics:\n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("Enter A%d%d:",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
int k=0;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        ans[k]=a[i][j];
        k++;
    }
}

for(i=0;i<14;i++){
    for(j=0;j<14-i;j++){
       if(ans[j]>ans[j+1]){
        temp=ans[j];
        ans[j]=ans[j+1];
        ans[j+1]=temp;
       }
    }
}
printf("Sorted Array : ");
for(i=0;i<16;i++){
    printf("%d \n",ans[i]);
}



return 0;
}
