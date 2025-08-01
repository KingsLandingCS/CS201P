#include <iostream>
using namespace std;

int main()
{
    int a, digit = 78563412;
    a = digit % 100;
    digit = digit / 100;

    cout << a << endl;
    cout << digit << endl;

    a = digit % 100;
    digit = digit / 100;

    cout << a << endl;
    cout << digit << endl;

    a = digit % 100;
    digit = digit / 100;

    cout << a << endl;
    cout << digit << endl;

    return 0;
}