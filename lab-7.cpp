#include <iostream>
using namespace std;

struct Test
{
    int a;
    float b;
};

Test addData(Test T1, Test T2)
{
    Test T3;
    T3.a = T1.a + T2.a;
    T3.b = T1.b + T2.b;

    return T3;
}

int main()
{
    Test T1 = {0, 0.0};
    Test T2 = {};
    T2.a = 0;
    T2.b = 0.0;

    // Take Values from User
    cout << "Record of Structure 1 ";
    cout << "Enter Integer Value: ";
    cin >> T1.a;
    cout << "Enter Float Value: ";
    cin >> T1.b;

    cout << "Record of Structure 2 ";
    cout << "Enter Integer Value: ";
    cin >> T2.a;
    cout << "Enter Float Value: ";
    cin >> T2.b;

    // Display Records of T1 & T2
    cout << " Records of Structure 1";
    cout << "T1 -> a = " << T1.a << "\t T1 -> b = " << T1.b;

    cout << " Records of Structure 2";
    cout << "T2 -> a = " << T2.a << "\t T2 -> b = " << T2.b;

    // Sum of T1 & T2
    Test T3 = addData(T1, T2);

    // Display Sum Record
    cout << "Sum of T1 & T2";
    cout << "T3 -> a = " << T3.a << "\tT3 -> b = " << T3.b << endl;
    return 0;
}