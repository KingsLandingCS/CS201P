#include <iostream>
using namespace std;

class myClass
{
private:
    int num1;
    int num2;

public:
    myClass()
    {
        num1 = 0;
        num2 = 0;
    }

    void setNum1(int n)
    {
        num1 = n;
    }

    void setNum2(int n)
    {
        num2 = n;
    }

    int getNum1()
    {
        return num1;
    }

    int getNum2()
    {
        return num2;
    }
};

int main()
{
    myClass obj;

    obj.setNum1(10);
    obj.setNum2(20);

    cout << "Num 1: " << obj.getNum1() << endl;
    cout << "Num 2: " << obj.getNum2() << endl;

    return 0;
}