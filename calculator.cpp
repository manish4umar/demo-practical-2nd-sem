#include <iostream>
using namespace std;

class calculator{
    public:

    int a ,b;

    void add(){
        cout<<"Sum = "<< a+b << endl<< endl;
    }

    void Sub(){
        cout<<"Substraction = "<< a-b << endl<< endl;
    }

    void Mul(){
        cout<<"Multiplication = "<< a*b <<endl<< endl;
    }

    void Div(){
        cout<<"Divide = "<< a/b << endl<< endl;
    }

};

int main(){
    calculator c;
    cout<<"Enter 1st No = ";
    cin>>c.a;
    cout<<endl;
    cout<<"Enter 2nd No = ";
    cin>>c.b;

    cout<<endl<<".................###############.................."<<endl<<endl;

    c.add();
    c.Sub();
    c.Mul();
    c.Div();

    return 0;

}
