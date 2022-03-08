#include<stdio.h>
int main(){
    int point, ticket, rate;
    printf("Enter number of points\n");
    scanf("%d", &point);
    printf("Enter number of tickets\n");
    scanf("%d", &ticket);
    if(rate > point)
    printf("Try again\n");
    else
    printf("Buy it!\n");
    return 0;
}