#include<stdio.h>
int main (){
  int a[10];
  for(int i =0;i<10;i++){
    printf(" Enter %d Number :",i+1);
    scanf("%d",&a[i]);
  }
  
    printf("%d Number : %d \n",4,a[3]);
    printf("%d Number : %d \n",7,a[6]);  
    printf("%d Number : %d \n",9,a[8]);
  
  return 0;
}