#include <iostream>
using namespace std;

class Car {
private:
    void startEngine() { 
        cout << "Engine started\n";
     }

public:
    void drive() {
        startEngine();      // internal function hidden from user
        cout << "Car is moving\n";
    }
};

int main() {
    Car c1;
    c1.drive();             // only simple action shown
    return 0;
}