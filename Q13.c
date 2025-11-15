#include<stdio.h>
#include<math.h>
int main(){
     float bytes;
     printf("type bytes");
     scanf("%f", &bytes);

     float KB =  bytes * 1024;
     printf("KB : %f\n", KB);
     
     float MB = bytes * 1024 * 1024;
     printf("MB : %f\n", MB);

     float GB = bytes * 1024 * 1024 * 1024;
     printf("GB : %f\n", GB);

    return 0;
}