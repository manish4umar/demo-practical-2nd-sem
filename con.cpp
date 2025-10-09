#include <iostream>
#include <string>
using namespace std;

class car{
    public : 

    string name;
         car(){
            name= "Manish\n";
         }
         ~car(){}
};

int main(){

    car c;
    cout << c.name;

    return 0;

}
   