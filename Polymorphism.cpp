#include <iostream>
using namespace std;
class Bca{
    public:

    void marks(int a){
        cout<<"The maarks is "<< a<<endl;
    }

    void marks(double a){
        cout << "The marks is "<< a;
    }


};

int main(){
    Bca b;
    b.marks(26);
    b.marks(89.99);

    return 0;
    
}