#include<stdio.h>
#include<math.h>
#define CENT_RATE 2
int main(){
    int pesos, dollar, rate;
    printf("enter value for Pesos: \n");
    scanf("%d",&pesos);
    printf("enter value for Dollar: \n");
    scanf("%d",&dollar);
   //convert dollar to pesos
    rate = (50 * dollar);
    if(rate > pesos)
    printf("Pesos");
    else
    printf("Dollars");
}