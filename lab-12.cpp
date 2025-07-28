#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double breadth;

public:
    Rectangle()
    {
        length = 0.0;
        breadth = 0.0;
        cout << "Default constructor of Rectangle class" << endl;
    }

    Rectangle(double len, double br)
    {
        length = len;
        breadth = br;
        cout << "Parameterized constructor of Rectangle class" << endl;
    }
};

class String
{
private:
    char *text;

public:
    String()
    {
        cout << "Default constructor of String class" << endl;
    }

    ~String()
    {
        cout << "String destructor is called" << endl;
    }
};

int main()
{

    Rectangle arr[5] = {Rectangle(12.3, 35.5), Rectangle(10.2, 45.7)};
    String *str;
    str = new String[5];

    delete[] str;
    return 0;
}