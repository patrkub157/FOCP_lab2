#include <iostream>

using namespace std;

int pow(int base, int power)
{
    int result = 1;

    for (int i = 0; i < power; i++)
    {
        result *= base;
    }

    return result;
}

int read_int()
{
    cout << "Please type a number:" << endl;

    int n;
    cin >> n;

    return n;
}

int main()
{
    int base = read_int();
    int power = read_int();

    int result = pow(base, power);

    cout << "Result: " << result << endl;

    return 0;
}