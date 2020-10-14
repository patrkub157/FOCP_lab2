#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

    float a, b, c;

    cout << "Please enter values: " << endl;
    cout << "a: " << endl;
    cin >> a;
    if (a == 0)
    {
        cout << "a can't be 0" << endl;
        return 0;
    }
    cout << " b: " << endl;
    cin >> b;
    cout << " c: " << endl;
    cin >> c;
    float delta = (b * b) - 4 * a * c;
    cout << "Delta is: " << delta << endl;
    float rDelta = sqrt(delta);

    if (delta < 0)
    {
        cout << "There is no roots of quadratic equation." << endl;
    }
    else if (delta == 0)
    {
        cout << "Root of delta is: " << rDelta << endl;
        float rZero = b / (2 * a);
        cout << "The root of quadratic equation is: " << rZero << endl;
    }
    else
    {
        cout << "Root of delta is: " << rDelta << endl;
        float rOne = (-b - rDelta) / (2 * a);
        float rTwo = (-b + rDelta) / (2 * a);
        cout << "There are two roots of quadratic equation: " << rOne << ", " << rTwo << endl;
    }

    system("PAUSE");
    return 0;
}