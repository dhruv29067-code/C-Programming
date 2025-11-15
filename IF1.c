#include<stdio.h>
int main(){
    int x,y;
    printf("enter x");
    scanf("%d", &x);

    printf("enter y");
    scanf("%d", &y);
    
    if(x>y){printf("largest = %d\n", x);
          printf("smallest = %d\n, y");}

    else if(y>x){printf("largest = %d\n", y);
          printf("smallest = %d\n", x);}
    else{printf("both number are equal\n");}      
          
    return 0;
}