#include <iostream>
using namespace std;

// Base class: Person
class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person
{
    string school;

public:
    Student(string n, int a, string s) : Person(n, a), school(s) {}
    void displayStudentInfo()
    {
        displayInfo(); // call base class function
        cout << "School: " << school << endl;
    }
};

int main()
{
    Student s("Alice", 16, "High School");

    cout << "Student Info:" << endl;
    s.displayStudentInfo(); // correct method call

    return 0;
}
