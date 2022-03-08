#include<stdio.h>
#define BUS_SIZE 50
int main(){
    int passengers, empty_seats;
    printf("enter number of passengers\n");
    scanf("%d",&passengers);
    if(passengers < BUS_SIZE){
        empty_seats = BUS_SIZE - passengers;
        printf("Number of Empty seat is: %d\n", empty_seats);
    }
    else{
        empty_seats = (BUS_SIZE-(passengers % BUS_SIZE));
        printf("Number of Empty seat is: %d\n", empty_seats);
    }
    return 0;
}