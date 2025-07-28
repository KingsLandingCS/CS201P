#include <iostream>
using namespace std;

class Matrix
{
private:
    int Elements[3][3];

public:
    friend ostream &operator<<(ostream &os, const Matrix &m);
};

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

int main()
{
    Matrix mat;
    cout << "Matrix: "<<endl << mat;
    return 0;
}