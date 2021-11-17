#include<stdio.h>
#include<math.h>
int main(){
    int houses, out_put;
    float res = 2 * 100;
    printf("enter number of houses visited\n");
    scanf("%d",&houses);
    out_put = ceil(res/houses);
    printf("percentage is %d%\n", out_put);
    return 0;
}