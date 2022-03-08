#include<stdio.h>
int main(){
    int number;
    printf("enter a countdown number:\n");
    scanf("%d", &number);
    while (number > 0)
    {
        printf("%d\n",number);
        if(number % 5 == 0){
            printf("Beep\n");
        }
        number--;
    }
    return 0;
}