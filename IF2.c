#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter x");
    scanf("%d", &x);

    printf("enter y");
    scanf("%d", &y);

    printf("rnter z");
    scanf("%d", &z);
    
    if(x>y && y>z){printf("largest = %d\n", x);
          printf("smallest = %d\n, y");}

    else if(z>y && y>x){printf("largest = %d\n", z);
          printf("smallest = %d\n", x);}

    else if(y>x && x>z){printf("largest = %d\n", y);
          printf("smallest = %d\n", z);}

    else if(y>z && z>x){printf("largest = %d\n", y);
          printf("smallest = %d\n", x);}  

    else if(x>z && z>y){printf("largest = %d\n", x);
          printf("smallest = %d\n", y);}

    else if(z > x > y){printf("largest = %d\n", z);
          printf("smallest = %d\n", y);}

    else{printf("all numbers are equal\n");}      
          
    return 0;
}