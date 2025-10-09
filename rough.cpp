#include <iostream>
#include <string>
using namespace std;

class vehicle{
    public:

   void vehicle_engine(){
    cout<<"Engine";
   }

};

class car : public vehicle{
    public:
    void car_entirer(){
        cout<<"Car entire";
    }
};

class bike : public car{
    public:
    void bike_engine(){
        cout<<"Bike enigine";
    };
};

int main(){
    bike b;
    b.car_entirer();
    b.vehicle_engine();

    return 0;
}
