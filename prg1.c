#include<stdio.h>

int main(){
    float celsius,farenheit;
    printf("the temperature in celsius:");
    scanf("%f",&celsius);
    farenheit=(9/5 * celsius) + 32;
    printf("the temp in farenheit: %f",farenheit);

    return 0;
}
