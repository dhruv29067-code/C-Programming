#include<stdio.h>
int main(){
    int n,count = 0;
    printf("enter number : ");
    scanf("%d", &n);
    if (n==0)
    {
        count = 1;
    }
    else{
        if(n<0){
            n=-n;
        }
        while(n>0){
            n=n/10;
            count=count+1;
        }
    }
    printf("number of digit is : %d",count);
    return 0;
}