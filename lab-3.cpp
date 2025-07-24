#include <iostream>
using namespace std;

void displayDiagonal(int rows, int cols)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == j)
            {
                cout << i << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;

    cout << "Enter Number of Rows: ";
    cin >> rows;

    cout << "Enter Number of Columns: ";
    cin >> cols;

    if (rows == cols)
    {
        displayDiagonal(rows, cols);
    }
    else
    {
        cout << "Number of columns are not same" << endl;
    }

    return 0;
}