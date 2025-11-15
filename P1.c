#include<stdio.h>
int main(){
    int n,m;
    printf("Enter No of Rows :");
    scanf("%d",&n);
    printf("Enter No of coloumn :");
    scanf("%d",&m);
    int a[n][m],b[n][m],mul[n][m];
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter A%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter B%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    printf("Addition of two matrics :\n");
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("S%d%d:%d\n",i+1,j+1,a[i][j]+b[i][j]);
        }
    }

    printf("Subtraction of two matrics :\n");
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Sub%d%d:%d\n",i+1,j+1,a[i][j]-b[i][j]);
        }
    }
printf("Multiplication of two matrices:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            mul[i][j] = 0;
            for(int k = 0; k < m; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
            printf("M%d%d :%d\n ",i+1,j+1 ,mul[i][j]);
        }
    }
    return 0;
}