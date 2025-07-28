#include <iostream>
using namespace std;

#define CUBE(x) ((x) * (x) * (x))

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    int numCube = CUBE(num);

    int updatedNum = num + 3;
    int updatedCube = CUBE(updatedNum);

    cout << "First Cube without addition: " << numCube << endl;
    cout << "Updated Cube after addtion: " << updatedCube << endl;

    return 0;
}