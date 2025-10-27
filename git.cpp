#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const & obj)
    {
        return Complex(real + obj.real, imag + obj.imag );
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{

    Complex c;

    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;
    cout << "Sum of two complex numbers: ";
    c3.display();
    return 0;
}