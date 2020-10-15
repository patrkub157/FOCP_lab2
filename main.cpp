#include <iostream>

using namespace std;

bool is_prime(int number)
{

    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << "Please put a number:" << endl;

    int a;
    cin >> a;

    if (is_prime(a))
    {
        std::cout << "Your number is prime" << std::endl;
    }
    else
    {
        std::cout << "Your number is NOT prime" << std::endl;
    }
    return 0;
}