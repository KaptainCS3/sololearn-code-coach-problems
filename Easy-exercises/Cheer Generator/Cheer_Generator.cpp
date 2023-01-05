#include <iostream>
using namespace std;
int main()
{
    int yard, i = 1;
    cout << "enter value for yard : " << endl;
    cin >> yard;
    if (yard > 10)
    {
        cout << "High Five";
    }
    else if (yard < 1)
    {
        cout << "shh";
    }
    else
    {
        while (i <= yard)
        {
            cout << "Ra!";
            i++;
        }
    }

    return 0;
}
