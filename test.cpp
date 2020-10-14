#include <iostream>

using namespace std;

int main()
{
    int totalmoney;
    cout << "please put number of times" << endl;
    cin >> totalmoney;
    int banknotes = 0;
    while (totalmoney >= 50)
    {
        totalmoney = totalmoney - 50;
        banknotes = banknotes + 1;
    }

    cout << "number of banknotes: " << banknotes << endl;
    return 0;
}
