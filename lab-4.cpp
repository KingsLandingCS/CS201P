#include <iostream>
using namespace std;

int findMin(int array[])
{
    int min = array[0];

    for (int i = 1; i <= 9; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}
int findMax(int array[])
{
    int max = array[0];

    for (int i = 1; i <= 9; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{

    int array[10] = {10, 4, 7, 9, 3, 12, 75, 34, 60, 2};
    cout << "Minimum Number -> " << findMin(array) << endl;
    cout << "Maximum Number -> " << findMax(array) << endl;

    return 0;
}