#include<stdio.h>
int main(){
    int sub1,sub2,sub3;
    
    printf("enter the marks of sub1");
    scanf("%d", &sub1);

    printf("enter the marks of sub2");
    scanf("%d", &sub2);

    printf("enter the marks of sub3");
    scanf("%d", &sub3);

    int total = sub1 + sub2 + sub3;
    printf("total : %d\n", total);

    int average = total / 3;
    printf("average : %d\n", average);

    if(average >= 70){printf("distinction");}

    else if(average >= 60){printf("first");}

    else if(average >= 50){printf("second");}

    else if(average >= 35){printf("third class");}

    else{printf("fail");}

    return 0;
}