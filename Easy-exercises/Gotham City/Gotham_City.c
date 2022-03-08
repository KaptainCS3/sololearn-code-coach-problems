#include<stdio.h>
int main(void){
    int criminals;
    printf("Enter number of criminals:\n");
    scanf("%d", &criminals);
    if(criminals > 10)
    printf("Good Luck out there!\n");
    else if(criminals >= 5 && criminals < 10)
    printf("Help me Batman\n");
    else
    printf("I got this!\n");
}