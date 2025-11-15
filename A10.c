#include<stdio.h>
int main(){
   int i,j;
    int a[10],f[10];
   for(i=0;i<10;i++){
    printf("Enter Number :");
    scanf("%d",&a[i]);
    f[i]=1;
   }
   for(i=0;i<10;i++){
    if(f[i]==0) continue;
    for(j=i+1;j<10;j++){
        if(f[j]==0) continue;
        if(a[i]==a[j]) {
            f[i]++;
            f[j]=0;
        }
    }
   }

   for(i=0;i<10;i++){
    if(f[i]!=0){
        printf("Frequency of %d :%d\n",a[i],f[i]);
    }
   }


    return 0;
}