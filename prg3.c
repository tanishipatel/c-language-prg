#include<stdio.h>

int main() {
    float fa,sa,ta;
    printf("enter first angle:");
    scanf("%f",&fa);
    printf("enter second angle:");
    scanf("%f",&sa);
    ta=180-(fa+sa); 
    printf("ta: %f",ta);
    
    return 0;
}