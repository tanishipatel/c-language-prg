#include<stdio.h>

int main() {
    float bs,hra_percentage,da_percentage,ta_percentage;
    float hra,da,ta,grosssalary;

    printf("enter the basic salary:");
    scanf("%f",&bs);
    printf("\n enter the hra percentage:");
    scanf("%f",&hra_percentage);
    printf("\n enter the da percentage:");
    scanf("%f",&da_percentage);
    printf("\n enter the ta percentage:");
    scanf("%f",&ta_percentage);

    hra=(bs*hra_percentage)/100;
    da=(bs*da_percentage)/100;
    ta=(bs*ta_percentage)/100;

    grosssalary=bs+hra+da+ta;
    printf("\n GROSS SALARY: %f",grosssalary);
    
    return 0;
    
}