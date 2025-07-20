#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int numberOfStudents = 10;
    vector<int> ages(numberOfStudents);
    int totalAge = 0;

    int i = 0;
    while (i < numberOfStudents)
    {
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> ages[i];
        totalAge += ages[i];
        i++;
    }

    double averageAge = static_cast<double>(totalAge) / numberOfStudents;

    cout << "Average age of " << numberOfStudents << " students is: " << averageAge << endl;
    return 0;
}