#include <iostream>
#include <string>

using namespace std;

class ghaziabad{
    public:
    int code;
    string place;
};

int main(){
    ghaziabad g;

    g.code=76;
    g.place="Bheem Nagar";

    cout<<"The place "<< g.place << " has code "<< g.code;

    return 0;
}