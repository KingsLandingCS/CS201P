#include <iostream>
using namespace std;

class MyClass
{
private:
    int x;
    int y;
};

int main()
{
    int n;

    cout << "Enter the number of objects: ";
    cin >> n;

    // Dynamically allocate memory to objects
    MyClass *objArray = new MyClass[n];

    // De-allocate memory that was allocated to objects
    delete[] objArray;

    return 0;
};