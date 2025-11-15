// Find out largest and smallest out of 100 nos.
#include<stdio.h>
int main (){
    int i;
    float n,pVe,mVe,Zero;
    pVe=mVe=Zero,n;
 
    for(i=1; i <= 200; i++){
        printf("enter number %d: ", i);
        scanf("%f", &n);

        if(n>0)
        printf("%f is positive.\n",n);
        
        if(n<0)
        printf("%f is negative.\n",n);

        if(n==0)
        printf("%f is Zero.\n",n);
    }

    return 0;
}