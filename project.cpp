#include <iostream>
#include <string>
using namespace std;

class shape
{
public:
    int l = 5;
    int b = 2;
    int h = 4;
    const float pi = 3.14;
    int r = 2;
};

class circle : public shape
{
public:
    void area()
    {
        cout << "Area of Circle :- " << pi * r * r << endl;
    }

    void perimeter()
    {
        cout << "Perimeter of Circle :- " << pi * r * 2 << endl;
    }
};

class triangle : public shape
{
public:
    void area()
    {
        cout << "Area of Triangle :- " << 1 / 2 * b * h << endl;
    }

    void perimeter()
    {
        cout << "Perimeter of Triangle :- " << l + b + h << endl;
    }
};

class rectangle : public shape
{
public:
    void area(int l , int b)
    {
        cout << "Area of rectangle :- " << l * b << endl;
    }

    void perimeter()
    {
        cout << "Perimeter of rectangle :- " << 2 * (l + b )<< endl;
    }
};

int main()
{
    circle c;
    c.area();
    c.perimeter();

    triangle t;
    t.area();
    t.perimeter();

    rectangle r;
    r.area(7 , 9);
    r.perimeter();

    return 0;
}
