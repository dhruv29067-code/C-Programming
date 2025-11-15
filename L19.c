// Print all integers from 1 to 100, which are divisible by 5 
#include<stdio.h>
int main(){
    int i = 1;
    do{
        if(i%5==0)
        printf("%d\n", i);
        i++;
    }
    while(i <= 100);
    return 0;
}