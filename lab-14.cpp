#include <iostream>
using namespace std;

template <class T>

T Add(T a, T b)
{
    return a + b;
}

class FirstClass
{
public:
    class SecondClass
    {
    public:
        void displayMessage()
        {
            cout << "Inside the Second Class";
        }
    };
};

int main()
{

    FirstClass::SecondClass obj;
    obj.displayMessage();
    cout << "Integers Sum: " << Add(10, 20) << endl;
    cout << "Float Sum: " << Add(12.5, 20.7) << endl;
    cout << "Double Sum: " << Add(2345.7, 6789.45) << endl;
    return 0;
}