#include <iostream>

using namespace std;

int fibonacci_iterative(int index)
{
    int a = 0;
    int b = 1;

    if (index < 2)
    {
        return index;
    }

    for (int i = 1; i < index; i++)
    {
        int tmp = a + b;
        a = b;
        b = tmp;
    }

    return b;
}

int fibonacci_recursive(int index)
{
    if (index < 2)
    {
        return index;
    }

    return fibonacci_recursive(index - 2) + fibonacci_recursive(index - 1);
}

int read_int()
{
    cout << "Put a number:" << endl;

    int k;
    cin >> k;

    return k;
}

int main()
{
    int index = read_int();

    int result_iterative = fibonacci_iterative(index);

    cout << "Result with iteration is: " << result_iterative << endl;

    int result_recursive = fibonacci_recursive(index);

    cout << "Result with recursion is: " << result_recursive << endl;

    return 0;
}