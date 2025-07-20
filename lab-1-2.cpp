#include <iostream>
using namespace std;

int main()
{
    int age;
    int totalAge = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter Age of Student " << i << ": ";
        cin >> age;
        totalAge += age;
    }

    cout << "Average Age of 10 Students: " << totalAge / 10 << endl;

    return 0;
}