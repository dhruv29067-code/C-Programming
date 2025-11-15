/*Find out net sales where net sales = gross sales – discount.
If gross sales > 20000, discount is 15%
If gross sales > 10000, discount is 10% otherwise 5%.
*/
#include<stdio.h>
int main(){
    float gross_sales;
    printf("enter the gross sales");
    scanf("%f", &gross_sales);

    if(gross_sales > 20000){
        float discount = 0.150 * gross_sales;
        float net_sales = gross_sales - discount;
        printf("net_sales : %f", net_sales);
    }
    else if (gross_sales > 10000){
        float discount = 0.10 * gross_sales;
        float net_sales = gross_sales - discount;
        printf("net_sales : %f", net_sales);
    }
    else{float discount = 0.050 * gross_sales;
        float net_sales = gross_sales - discount;
        printf("net_sales : %f", net_sales);
    }
    return 0;


}