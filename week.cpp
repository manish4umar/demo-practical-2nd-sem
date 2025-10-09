#include <iostream>
using namespace std;
void week(int day)
{
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thuresday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Error";
        break;
    }
}

    int main()
{
    int day;
    cout << "Enter No Btw (1-7) " << endl;
    cin >> day;
    cout << "Day = ";
    week(day);
    return 0;
}