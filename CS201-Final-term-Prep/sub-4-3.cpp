#include <iostream>
using namespace std;

class Matrix
{
private:
    int Elements[3][3];

public:
    // Friend functions for I/O
    friend ostream &operator<<(ostream &os, const Matrix &m);
    friend istream &operator>>(istream &is, Matrix &m);
};

// Output friend function
ostream &operator<<(ostream &os, const Matrix &m)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            os << m.Elements[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

// Input friend function
istream &operator>>(istream &is, Matrix &m)
{
    cout << "Enter elements (3x3):" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "Element[" << i << "][" << j << "]: ";
            is >> m.Elements[i][j];
        }
    }
    return is;
}

int main()
{
    Matrix mat;

    cin >> mat; // Use overloaded >> operator
    cout << "Matrix entered:" << endl
         << mat; // Use overloaded << operator

    return 0;
}
