#include<iostream>
using namespace std;
int main(){
int criminals;
    cout <<"Enter number of criminals: " << endl;
    cin >> criminals;
    criminals > 10 ? cout <<"Good Luck out there! " << endl
    : (criminals >= 5 && criminals < 10) ? cout <<"Help me Batman " << endl 
    : cout <<"I got this! " <<endl;
    return 0;
}
