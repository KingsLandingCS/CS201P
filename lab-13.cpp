#include <iostream>
#include <fstream>
using namespace std;

class String
{
private:
    string text;

public:
    String()
    {
        text = "";
    }

    // Overloaded >> operator (input and write to file)
    friend istream &operator>>(istream &in, String &obj)
    {
        in >> obj.text;

        // Open file locally, not globally
        ofstream fout("underwood.txt", ios::app);
        fout << obj.text << endl;
        fout.close();

        return in;
    }

    // Overloaded << operator (display text)
    friend ostream &operator<<(ostream &out, const String &obj)
    {
        out << obj.text;
        return out;
    }

    // Overloaded + operator (concatenation)
    String operator+(const String &obj)
    {
        String temp;
        temp.text = this->text + " " + obj.text;
        return temp;
    }
};

int main()
{
    String s1, s2, s3;

    cout << "Enter First Name: ";
    cin >> s1;

    cout << "Enter Last Name: ";
    cin >> s2;

    s3 = s1 + s2;

    cout << "Full Name: ";
    cout << s3 << endl;

    return 0;
}
