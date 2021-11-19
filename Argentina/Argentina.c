#include<stdio.h>
#include<math.h>
#define CENT_RATE 2
int main(){
    int pesos, dollar, rate;
    printf("enter value for Pesos: \n");
    scanf("%d",&pesos);
    printf("enter value for Dollar: \n");
    scanf("%d",&dollar);
    rate = (CENT_RATE * pesos);
    int result = ceil(rate / dollar);
    if(result > dollar)
    printf("Dollars");
    else
    printf("Pesos");
}