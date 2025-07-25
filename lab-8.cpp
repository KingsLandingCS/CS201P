#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    cout << "Logical AND: " << (a && b) << endl;
    cout << "Bitwise AND: " << (a & b) << endl;

    cout << "Logical OR: " << (a || b) << endl;
    cout << "Bitwise OR: " << (a | b) << endl;

    return 0;
}