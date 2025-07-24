#include <iostream>
#include <string.h>
#include <cctype> // for tolower
using namespace std;

void compareString(char *arr1, char *arr2, int size) //	int array[] or int* array, ❌ Not required, 	Acts like pointer
{
    int i = 0; // Start from index 0
    int flag = 0;

    while (i < size)
    {
        if (tolower(arr1[i]) != tolower(arr2[i]))
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
    {
        cout << "Both Arrays are same" << endl;
    }
    else
    {
        cout << "Both Arrays are not same" << endl;
    }
}

int main()
{
    char firstArray[25];
    char secondArray[25];

    cout << "Enter First Name: ";
    cin.getline(firstArray, 25);
    cout << "Enter Second Name: ";
    cin.getline(secondArray, 25);

    if (strlen(firstArray) == strlen(secondArray))
    {
        compareString(firstArray, secondArray, strlen(firstArray));
    }
    else
    {
        cout << "Size of Both Arrays are not same" << endl;
    }

    return 0;
}
