#include <iostream>
#include <string>
using namespace std;

class collage {
    public:
    string Course;
    int roll_no;
    int batch;
    string name;

    private :

    int marks;
    int mobile_no;

};

class branch : public collage{
    public:
    int addmission_no;
};

int main(){
    collage c;
    branch b;

    cout<<"Enter Name= "<< endl;
    cin >> b.name;

    cout<< "Name = " << b.name;
    return 0;


}