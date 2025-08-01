#include <iostream>
using namespace std;

class Number
{
public:
    int n;

    Number(int set_n)
    {
        n = set_n;
    }

    Number operator+(const Number &numb)
    {
        return Number(this->n + numb.n);
    }
};

int main()
{
    Number a(5);
    Number b(10);
    Number c = a + b;

    cout << "c.n:" << c.n << endl;
    return 0;
}

// ✅ Operator Overloading in C++
// Operator overloading is a feature in C++ that allows you to redefine the meaning of an operator (like +, -, *, etc.) so it can work with your own custom classes — not just built-in data types.

// 💡 In simple terms:
// Operator overloading lets you use operators like + or - with objects, just like you do with int, float, etc.

// return Number(this->n + numb.n);
// This line is inside the overloaded + operator function. Here's what it's doing step by step:

// 🔹 this->n + numb.n
// this->n → means the n value of the current object (e.g. a.n when you write a + b)

// numb.n → means the n value of the numb object passed as argument (e.g. b.n)

// So if a.n = 5 and b.n = 10, then:

// kotlin
// Copy
// Edit
// this->n + numb.n = 5 + 10 = 15
// 🔹 Number(this->n + numb.n)
// This creates a new object of class Number with the value 15 as its n.

// You're calling the constructor:

// cpp
// Copy
// Edit
// Number(int set_n)
// So this line is like:

// cpp
// Copy
// Edit
// Number temp(15);
// 🔹 return Number(this->n + numb.n);
// Returns that new Number object back to wherever this overloaded + operator was used — in this case:

// cpp
// Copy
// Edit
// Number c = a + b;
// ✅ Summary:
// You're adding the n values of two Number objects.

// Creating a new Number object with the result.

// Returning it.

// Let me show this with values for better understanding:

// cpp
// Copy
// Edit
// Number a(5);     // a.n = 5
// Number b(10);    // b.n = 10
// Number c = a + b; // triggers operator+()
//                  // return Number(5 + 10); => return Number(15)
// So now c.n = 15.
// And that’s what gets printed:

// makefile
// Copy
// Edit
// c.n:15