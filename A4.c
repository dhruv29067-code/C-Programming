#include<stdio.h>
int main(){
    int n;
    printf("Enter Amount : ");
    scanf("%d",&n);

    if(n>=500) {
        printf("500 Notes : %d\n", n/500);
        n = n % 500;
    }
    if(n>=200) {
        printf("200 Notes : %d\n", n/200);
        n = n % 200;
    }
    if(n>=100) {
        printf("100 Notes : %d\n", n/100);
        n = n % 100;
    }
    if(n>=50) {
        printf("50 Notes : %d\n", n/50);
        n = n % 50;
    }
    if(n>=20) {
        printf("20 Notes : %d\n", n/20);
        n = n % 20;
    }
    if(n>=10) {
        printf("10 Notes : %d\n", n/10);
        n = n % 10;
    }
    if(n>=5) {
        printf("5 Coin : %d\n", n/5);
        n = n % 5;
    }
    if(n>=2) {
        printf("2 Coin : %d\n", n/2);
        n = n % 2;
    }
    if(n>=1) {
        printf("1 Coin : %d\n", n/1);
        n = n % 1;
    }

    return 0;
}