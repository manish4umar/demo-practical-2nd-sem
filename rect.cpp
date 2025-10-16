#include <iostream>
#include <iomanip> 
using namespace std;

class rectangle
{
public:
    double l, w;

    void length()
    {
        cout << "Enter Length of Rectangle: ";
        cin >> l;
    }

    void width()
    {
        cout << "Enter Width of Rectangle: ";
        cin >> w;
    }

    void area()
    {
        cout << setw(20) << left << "Area of Rectangle:" 
             << setw(10) << right << l * w << endl;
    }

    void perimeter()
    {
        cout << setw(20) << left << "Perimeter of Rectangle:" 
             << setw(10) << right << 2 * (l + w) << endl;
    }
};

int main()
{
    rectangle r;

    cout << "------------------------------" << endl;
    cout << "   RECTANGLE CALCULATOR" << endl;
    cout << "------------------------------" << endl << endl;

    r.length();
    r.width();

    cout << "\n------------------------------" << endl;
    cout << "      RECTANGLE DETAILS" << endl;
    cout << "------------------------------" << endl;
    cout << setw(20) << left << "Length:" << setw(10) << right << r.l << endl;
    cout << setw(20) << left << "Width:" << setw(10) << right << r.w << endl;

    cout << "\n------------------------------" << endl;
    cout << "         CALCULATIONS" << endl;
    cout << "------------------------------" << endl;
    r.area();
    r.perimeter();

    cout << "------------------------------" << endl;

    return 0;
}