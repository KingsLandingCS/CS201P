// Is it possible to define the below functions in a C++ program? In either case, justify your answer.

// void myFunction(int x, int y);         // Valid - passed by value
// void myFunction(int &x, int &y);       // Valid - passed by reference

// ✅ myFunction(int x, int y);
// Yes, this is a valid function declaration in C++.
// It takes two arguments passed by value:

// int x: receives a copy of the first argument

// int y: receives a copy of the second argument

// ✅ myFunction(int &x, int &y);
// Yes, this is also valid in C++.
// It takes two arguments passed by reference:

// int &x: binds directly to the caller's variable (not a copy)

// int &y: same as above

// This allows the function to modify the original variables passed from the caller.


// void myFunction(int x, int y);
// You're passing by value, which means:

// New copies of the arguments are created inside the function.

// Any changes made to x or y inside the function will not affect the original variables passed by the caller.