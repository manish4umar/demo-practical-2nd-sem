#include <iostream>
using namespace std;

class Papa{
    public:
    void salary(){
        cout<<"Salary of Papa is 1000000 Rs";

    }
};
class Mother{
    public:
    void salary2(){
        cout<<" & Salary of Mother is 800000 Rs ";

    }
};

class child : public Papa , public Mother{
    public:
    void need(){
        cout<<" And Need of child 1 is 1000 rs"<<endl;
    }
};
class child2 : public Papa{
    public:
    void need(){
        cout<<" And Need of child 1 is 8000 rs";
    }
};
int main(){
    child c;
    child2 c2;
    c.salary();
    c.salary2();
    c.need();
    c2.salary();
    c2.need();

    return 0;
}


