
#include <iostream>
using namespace std;
// done by Leonard Appelgryn(KAPTAINCS3)
#define amt_in 21000000
int main(void)
{
    int customer, new_amt;
    cout <<"Enter number of Customers: " << endl;
    scanf("%d", &customer);
    new_amt = 3000000 * customer;
    (new_amt > amt_in) ? cout <<"Profit " << endl
                       : (new_amt == amt_in) ? cout <<"Broke Even " << endl
                       :  cout <<"Loss " << endl;
}