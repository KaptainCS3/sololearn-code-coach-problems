#include<iostream>
using namepace std;
#define CENT_RATE 2
int main(){
    int pesos, dollar, rate;
    cout <<"enter value for Pesos: " << endl;
    cin >> pesos;
    cout << "enter value for Dollar: " << endl;
    cin >> dollar;
   //convert dollar to pesos
    rate = (50 * dollar);
    rate > pesos ? cout << "Pesos";
                 : cout << "Dollars";
    return 0;
}
