#include <iostream>
using namespace std;

template <typename T>

T reciprocal(T x)
{
    return 1 / x;
}

int main()
{
    int result = reciprocal(5);

    cout << "The output of reciprocal(5) is: " << result << endl;

    return 0;
}

// When this function is called with an integer 5, like reciprocal(5), the template type T will be deduced as int.

// Inside the function, 1/x will be 1/5. In integer division (which is performed when both operands are integers), the result is the quotient without any fractional part (it truncates towards zero).

// Therefore, 1/5 as integer division results in 0.

// The output of the function reciprocal(5) will be 0.