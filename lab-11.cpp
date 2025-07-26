#include <iostream>
using namespace std;

class MathClass
{
private:
    int number;

public:
    MathClass()
    {
        number = 0;
    }

    MathClass(int n)
    {
        number = n;
    }

    MathClass operator+(MathClass obj)
    {
        MathClass temp;
        temp.number = number + obj.number;

        return temp;
    }

    void display()
    {
        cout << "Result: " << number << endl;
    }
};

int main()
{
    MathClass firstObj, secondObj(35), result;
    result = firstObj + secondObj;

    result.display();
    return 0;
}