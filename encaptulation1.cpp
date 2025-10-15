#include <iostream>
using namespace std;

class BankAccount{
    private:

    int balance;

    public:

    void setbalance(int b){
        balance = b;
    }
    int getbalance(){
        return balance;
    }


};

int main(){
    BankAccount b;
    b.setbalance(1000);

    cout << "Your Bank Balance is "<< b.getbalance();
    return 0;
}