#include<stdio.h>
int main(){
    int x,y,a;
    printf("enter x");
    scanf("%d", &x);

    printf("enter y");
    scanf("%d", &y);

    printf("before swapping : x = %d, y = %d\n", x,y);

    a = x;
    x = y;
    y = a;
    printf("after swapping : x = %d, y = %d\n", x, y);
    return 0;


}