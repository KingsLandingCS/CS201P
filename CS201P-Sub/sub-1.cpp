#include <iostream>
using namespace std;

int main()
{

    int i = 1;

    while (i < 10)
    {
        if (i % 2 == 1)
        {
            cout << i << "" << endl;
        }

        i = i + 3;
        }

    return 0;
}