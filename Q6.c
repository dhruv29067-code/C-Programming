#include<stdio.h>
int main(){
    int Hour;
    printf("Enter hour");
    scanf("%d", &Hour);

    int Minutes = Hour * 60;
    printf("Minutes is : %d", Minutes);
    return 0;
}