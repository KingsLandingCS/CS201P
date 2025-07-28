#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numberOfStudents = 10;
    vector<int> ages(numberOfStudents);
    int totalAge = 0;

    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << "Enter age of Student " << i + 1 << ": ";
        cin >> ages[i];
        totalAge += ages[i];
    }

    // Calculate Average
    double averageAge = static_cast<double>(totalAge) / numberOfStudents;

    cout << "Average age of " << numberOfStudents << " Students is: " << averageAge << endl;

    return 0;
}

// static_cast<double> is a type casting operator in C++ that converts a value from one data type to another in a safe and explicit way.

// Why it's used in your code:
// In your program:

// cpp
// Copy
// Edit
// double averageAge = static_cast<double>(totalAge) / numberOfStudents;
// totalAge and numberOfStudents are both int (integers).

// Without casting, dividing two integers performs integer division, which cuts off the decimal part (e.g., 15 / 10 = 1 instead of 1.5).

// static_cast<double>(totalAge) converts totalAge into a double before division, so the division happens in floating-point precision and you get a decimal result (e.g., 15 / 10 = 1.5).

// ✅ Simple Example:
// cpp
// Copy
// Edit
// int a = 5, b = 2;
// cout << a / b << endl;                      // Output: 2 (integer division)
// cout << static_cast<double>(a) / b << endl; // Output: 2.5 (floating-point division)
// 📌 Summary:
// static_cast<Type>(value) safely converts value into Type.

// It's safer and more readable than traditional C-style casting like (double)value.

// It avoids accidental type mistakes.

// If you want, I can show a comparison with and without static_cast.