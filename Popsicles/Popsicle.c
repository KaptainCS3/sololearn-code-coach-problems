#include<stdio.h>
int main(void){
    int siblings, popsicles;
    printf("Enter number of siblings: \n");
    scanf("%d", &siblings);
    printf("Enter number of Popsicles: \n");
    scanf("%d", &popsicles);
    if(popsicles % siblings != 0)
    printf("eat them yourself\n");
    else
    printf("give away\n");
}