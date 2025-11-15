#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter String :");
    gets(a);
    int n=strlen(a);
    printf("Lenght Of String:%d",n);
    return 0;
}