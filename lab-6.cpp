#include <iostream>
using namespace std;

void getData(int a[4][4])
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            cout << "Enter Row " << i << ", Col " << j << ": ";
            cin >> a[i][j];
        }
    }
}

void displayData(int a[4][4])
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; i <= 3; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

void transposeData(int a[4][4])
{
    int temp;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = i; j <= 3; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

int main()
{
    int arr[4][4];
    getData(arr);
    cout << " Original Matix" << endl;
    displayData(arr);
    transposeData(arr);
    cout << " Tranpose Matix" << endl;
    displayData(arr);
    return 0;
}