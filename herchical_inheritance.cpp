#include <iostream>
#include <string>
using namespace std;

class name{
    public:

    string name= "Manish";

};

class roll_no : public name{
    public:
    int roll_no= 19;
};

class student : public name {
    public:
    string branch="Bca";
};

int main(){
    student s;
    roll_no r;
    cout<<"Name = "<<s.name<<endl ;
    cout<<"roll no = "<<r.roll_no<< endl ;
    cout<<"branch = "<<s.branch;
    return 0;
}
