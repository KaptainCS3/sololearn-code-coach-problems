#include<stdio.h>
#include<math.h>
#define canvas_brushes 40.00
int main(void){
    float paint, res, tax, total;
    printf("Enter number of colors: \n");
    scanf("%f", &paint);
    res = ((paint * 5.00) + canvas_brushes);
    tax = ceil((res * 10) / 100);
    total = ceil(tax + res);
    printf("Total cost for project is : %.0f", total);
}