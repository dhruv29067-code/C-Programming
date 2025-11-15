#include<stdio.h>
int main(){
    int n,i;
    printf("Enter No :");
    scanf("%d",&n);
   if (n==0 || n==1 ) {
        printf(" %d Is Not A Prime Number ",n);
        return 0;
        }
    if (n==2) {
        printf(" %d Is Prime Number ",n);
        return 0;
        }
    for(i=2;i<n;i++){
              if(n%i==0){
            printf("%d is Not  Prime Number",n);
           return 0; 
        }
    }
        
   printf("%d is Prime Number",n);
    

    return 0;
    }