//Print sum of all integers from 1 to 100, which are divisible by 3.
#include<stdio.h>
int main(){
     int sum = 0,i = 1;
    for(i = 1; i<= 100; i++){
         if(i % 3 == 0){
        sum = sum + i;}}
        printf("sum : %d\n", sum);
    return 0;
}