#include<iostream>
using namepace std;
int main(){
    int yard, i = 1;
    cout <<"enter value for yard : " << endl;
    cin >> yard;
    (yard > 10) ? cout << "High Five";
              : (yard < 1) ? cout << "shh"
                           : cout << "";
        while(i <= yard){
            printf("Ra!");
            i++;
        }
    }
    return 0;
}
