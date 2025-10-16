#include <iostream>
#include <iomanip>
using namespace std;

class rectangle
{
public:
    double l;
    double w;
    void lenght()
    {

        cout << "Enter Length of Rectangle:- ";
        cin >> l;
    }

    void width()
    {

        cout << "Enter width of Rectangle:- ";
        cin >> w;
    }

    void area()
    {
        cout << endl<< "Area :- " << l * w << endl;
    }

    void perimeter()
    {
        cout << "Perimeter :- " << 2 * (l + w) << endl;
    }
};

int main()
{
    rectangle r;
    r.lenght();
    r.width();
    cout << endl<<endl<<"Input the length of the rectangler: " << r.l << endl;
    cout << "Input the width of the rectangle: " << r.w << endl<<endl;
    ;

    r.area();

    r.perimeter();
    return 0;
}