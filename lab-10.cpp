#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    double id;
    string gender;
    int age;

public:
    Employee()
    {
        name = "";
        id = 0.0;
        gender = "";
        age = 0;
    }

    Employee(string n, double i, string g, int a)
    {
        name = n;
        id = i;
        gender = g;
        age = a;
    }

    void setName(string n)
    {
        name = n;
    }

    void setId(double i)
    {
        id = i;
    }

    void setGender(string g)
    {
        gender = g;
    }

    void setAge(int a)
    {
        age = a;
    }

    string getName()
    {
        return name;
    }

    double getId()
    {
        return id;
    }

    string getGender()
    {
        return gender;
    }

    int getAge()
    {
        return age;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Gender: " << gender << endl;
        cout << "Employee Age: " << age << endl;
    }
};

int main()
{
    Employee e1;
    Employee e2("Zubair", 102, "male", 26);
    cout << "Calling Default Constructor";
    e1.display();
    cout << "Calling parameterized Constructor" << endl;
    e2.display();

    e1.setName("Zubi");
    e1.setId(105);
    e1.setGender("Male");
    e1.setAge(28);

    cout << "Employee Name: " << e1.getName() << endl;
    cout << "Employee ID: " << e1.getId() << endl;
    cout << "Employee Gender: " << e1.getGender() << endl;
    cout << "Employee Age: " << e1.getAge() << endl;

    e2.setName("Zubi");
    e2.setId(105);
    e2.setGender("Male");
    e2.setAge(28);

    cout << "Employee Name: " << e2.getName() << endl;
    cout << "Employee ID: " << e2.getId() << endl;
    cout << "Employee Gender: " << e2.getGender() << endl;
    cout << "Employee Age: " << e2.getAge() << endl;

    return 0;
}