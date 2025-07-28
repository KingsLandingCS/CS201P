#include <iostream>
using namespace std;

class Box
{
private:
    int length;

public:
    // constructor
    Box(int l)
    {
        length = l;
    }

    // Friend function declaration
    friend void displayLength(const Box &b);
};

void displayLength(const Box &b)
{
    cout << "Length of the box is: " << b.length << endl;
}

int main()
{
    Box myBox(10);
    displayLength(myBox);
    return 0;
};