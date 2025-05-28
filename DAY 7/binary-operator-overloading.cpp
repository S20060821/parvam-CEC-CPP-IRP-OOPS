#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    complex()
    {
        real = 0;
        imaginary = 0;
    }

    complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    complex operator+(const complex &c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    complex operator-(const complex &c)
    {
        complex temp;
        temp.real = real - c.real;
        temp.imaginary = imaginary - c.imaginary;
        return temp;
    }

    void showsum()
    {
        cout << "sum of 2 complex numbers:" << real << "+" << imaginary << "i" << endl;
    }
    void showdifference()
    {
        cout << "difference of 2 complex numbers:" << real << "-" << imaginary << "i" << endl;
    }
};

int main()
{
    int r1, r2, i1, i2;
    cout << "enter the first complex number(real number & imaginary number:eg.5+3i):" << endl;
    cin >> r1 >> i1;
    cout << "enter the second complex number(real number & imaginary number:eg.10+6i):" << endl;
    cin >> r2 >> i2;

    complex comp1(r1, i1);
    complex comp2(r2, i2);

    complex sum = comp1 + comp2;
    complex diff = comp1 - comp2;

    cout << "first complex number" << r1 << "+" << i1 << "i" << endl;
    cout << "second complex number" << r2 << "+" << i2 << "i" << endl;

    sum.showsum();
    diff.showdifference();
}