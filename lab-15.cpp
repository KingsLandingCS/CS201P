#include <iostream>
using namespace std;

class Matrix
{
private:
    int **A;
    int row, col;

public:
    Matrix()
    {
        row = 0;
        col = 0;
    }

    void read()
    {
        cout << "Enter Number of Row: ";
        cin >> row;
        cout << "ENter Number of column: ";
        cin >> col;
    }

    void input()
    {
        A = new int *[row];

        for (int i = 0; i < row; i++)
        {
            A[i] = new int[col];
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                A[i][j] = 0;
            }
        }

        cout << "Taking Elements" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "Enter " << i << ", " << j << "Element: ";
                cin >> A[i][j];
            }
        }
    }

    Matrix operator*(int d)
    {
        Matrix temp(*this);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                temp.A[i][j] *= d;
            }
        }
        return temp;
    }

    void display()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << A[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix M1, M2;
    M1.read();
    M1.input();
    cout << "Original Matrix";
    M1.display();
    M2 = M1 * 2;
    cout << "After multiplication Matrix" << endl;
    M2.display();
    return 0;
}