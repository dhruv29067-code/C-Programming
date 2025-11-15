/* 
Find out net salary where net salary = gross salary + allowances – deductions.
If gross salary > 10000, allowances are 10%, deductions are 3% 
If gross salary > 5000, allowances are 7%, deduction are 2%
*/
#include<stdio.h>
int main(){
    float gross_salary, allowances, deductions;
    printf("enter gross sallary");
    scanf("%f", &gross_salary);

    if(gross_salary > 10000.0){
        allowances = gross_salary * 0.10;
        deductions = gross_salary * 0.030;
        float net_salary = gross_salary + allowances - deductions;
        printf("net_salary : %f", net_salary);
    }
    else if(gross_salary > 5000.0){
        allowances = 0.070 * gross_salary;
        deductions = 0.020 * gross_salary;
        float net_salary = gross_salary + allowances - deductions;
        printf("net_salary : %f", net_salary);
    }
    
    else{printf("no");}
    return 0;
}