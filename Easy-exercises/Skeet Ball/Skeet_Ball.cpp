#include<iostream>
using namespace std;
int main(){
    int point, ticket, rate;
    cout <<"Enter number of points" << endl;
    cin >> point;
    cout <<"Enter number of tickets" <<endl;
    cin >> ticket;
    rate = ticket * 12;
    (rate > point) ? cout <<"Try again" << endl
                   : cout <<"Buy it! " <<endl;
    return 0;
}
