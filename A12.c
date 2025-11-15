#include<stdio.h>
int main (){
    int n,i,new;
    printf("Enter Total Numbers In array :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d Number :",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter New Number :");
    scanf("%d",&new);
   
    for(i=n;i>0;i--){
        a[i]=a[i-1];
    }
     a[0]=new;
    n++;
    printf("New Array : \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}