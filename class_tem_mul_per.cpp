#include<iostream>
using namespace std;

template<class a , class b>
class both{
    public:
    a x;
    b y;

    void display(){
        cout<< x << " and "<< y;
    }
};
int main(){
    both<float , int> z;

    z.x= 7.99;
    z.y= 80;
    z.display();

    return 0;

}