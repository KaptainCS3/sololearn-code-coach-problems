#include<iostream>
#include<cmath>
using namespace std;
// done by Leonard Appelgryn(KAPTAINCS3)
int main(){
    int houses, out_put;
    float res = 2 * 100;
    cout <<"enter number of houses visited" <<endl;
    cin >>houses;
    out_put = ceil(res/houses);
    cout <<"percentage is " <<out_put<<"%" <<endl;
    return 0;
}
