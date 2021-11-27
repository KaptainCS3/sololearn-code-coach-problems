#include<stdio.h> 
#define amt_in 21000000
int main(void){
    int   customer, new_amt;
    printf("Enter number of Customers:\n");
    scanf("%d", &customer);
    new_amt = 3000000 * customer;
    if(new_amt > amt_in)
    printf("Profit\n");
    else if(new_amt == amt_in)
    printf("Broke Even\n");
    else
    printf("Loss\n");
}