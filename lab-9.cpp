#include <iostream>
using namespace std;

void myfunc(int a)
{
    cout << "Using Integer myfunc(): " << a << endl;
}

void myfunc(double a)
{
    cout << "Using Double myfunc(): " << a << endl;
}

void myfunc(char a)
{
    cout << "Using Character myfunc(): " << a << endl;
}

int main()
{
    myfunc(5);
    myfunc(10.5);
    myfunc('A');
    return 0;
}