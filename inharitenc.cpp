#include <iostream>
#include <string>
using namespace std;

class animal{
    public: 
    
    void animal_voice(){
        cout<< "Animal sound"<<endl;
    }
};
class dog : public animal{
    public: 
    
    void animal_voice(){
        cout<< "Bark"<<endl;
    }
};

int main(){
    animal a;
    a.animal_voice();

    dog d;
    d.animal_voice();

    return 0;

}