//Find out how many boys and girls are there in a class of 50 students. 
//Input sex code. 
#include<stdio.h>
int main(){
    int i, boy = 0,girl = 0;
    char sex;

    printf("enter sex code for 50 student(M for boy,F for girl\n)");

    for(i=1; i<=50; i++){
        printf("student %d : ", i);
        scanf(" %c", &sex);

        if(sex == 'M' || sex == 'm')
         boy++;

        else if(sex == 'F' || sex == 'f')
         girl++;

        else {printf("enter only m of f\n");}

}
    printf("total girls : %d\n", girl);
    printf("total boys : %d\n",boy);
    return 0;
}