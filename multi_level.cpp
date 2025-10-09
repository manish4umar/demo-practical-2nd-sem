#include <iostream>
#include <string>
using namespace std;

class name{
    public:

    string name= "Manish";

};

class roll_no : public name  {
    public:
    int roll_no= 19;
};

class student :public roll_no{
    public:
    string branch="Bca";
};

int main(){
    student s;
    cout<<"Name = "<<s.name<<endl ;
    cout<<"roll no = "<<s.roll_no<< endl ;
    cout<<"branch = "<<s.branch;
    return 0;
}
