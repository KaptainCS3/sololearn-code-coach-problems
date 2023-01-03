#include<iostream>
#include<cmath>
#define canvas_brushes 40.00
using namespace std;
int main(void){
    float paint, res, tax, total;
    cout <<"Enter number of colors: " << endl;
    cin >>paint;
    res = ((paint * 5.00) + canvas_brushes);
    tax = ceil((res * 10) / 100);
    total = ceil(tax + res);
    cout << fixed;
    cout.precision(1);
    cout <<"Total cost for project is : " << total;
}
