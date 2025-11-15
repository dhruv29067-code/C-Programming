#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    printf("Enter String:");
    gets(str1);

    printf("Reversed String:%s",strrev(str1));
    return 0;
}