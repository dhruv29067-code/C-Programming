#include<stdio.h>
int main (){
  int a[5];
  for(int i =0;i<5;i++){
    printf(" Enter %d Number :",i+1);
    scanf("%d",&a[i]);
  }
  for(int i =0;i<5;i++){
    printf("%d Number : %d \n",i+1,a[i]);
  }
  return 0;
}