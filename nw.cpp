#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int click;
    cout << "Click for: Add=1 Sub=2 Mul=3 Div=4 :" << endl;
    cin >> click;

    if (click < 1 || click > 4) {
        cout << "Error 404: Invalid operation selected." << endl;
        return 1;
    }

    int a, b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    switch (click) {
        case 1:
            cout << "Sum: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Subtraction: " << sub(a, b) << endl;
            break;
        case 3:
            cout << "Multiplication: " << mul(a, b) << endl;
            break;
        case 4:
            cout << "Division: " << divide(a, b) << endl;
            break;
    }

    return 0;
}