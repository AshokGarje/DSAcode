#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    Complex()
    {
        a = 0;
        b = 0;
    }

    void printNumber()
    {
        cout << "The number is: " << a << " + " << b << "i" << endl;
    }
}j;
int main()
{
    Complex c(3, 6);
    c.printNumber();

    Complex u(5);
    u.printNumber();

    Complex d;
    d.printNumber();
    return 0;
}