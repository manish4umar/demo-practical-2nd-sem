#include <iostream>
using namespace std;

class Car {
public:

int a;
float b;
double c;


    
};

int main(){
    Car c;
    cout<<"Enter First no= ";
    cin>> c.a;

    cout<<"Enter Second no= ";
    cin>> c.b;

    cout<<"Enter Third no= ";
    cin>> c.c;

    cout<<"Sum of a , b , c ="<< c.a+c.b+c.c;

    return 0;


}