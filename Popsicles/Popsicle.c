#include<stdio.h>
int main(void){
    int sbl, pop;
    printf("Enter number of siblings: \n");
    scanf("%d", &sbl);
    printf("Enter number of Popsicles: \n");
    scanf("%d", &pop);
    if(pop % sbl =! 0)
    printf("eat them yourself\n");
    else
    printf("give away\n");
}