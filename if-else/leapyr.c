#include<stdio.h>

int main(){
    int yr=2025;
    if((yr%400==0)||(yr%4==0)&&(yr%100!=0)){
        printf("leap yr");
    }else{
        printf("not a leap yr");
    }
    return 0;
}