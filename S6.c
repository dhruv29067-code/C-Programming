#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100];
    printf("Enter String 1:");
    gets(str1);
    printf("Enter String 2:");
    gets(str2);
    int n=strcmp(str1,str2);
    if(n==0){
        printf("Both String Are Equal");
    }
    else if(n>0){
        printf("String 1 > String 2");
    }
    else {
        printf("String 1 < String 2");
    }
    return 0;
}