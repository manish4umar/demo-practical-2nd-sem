#include <iostream>
using namespace std;

class students{
    public:
    string name;
    int roll_no;
    string class_room;
    int st_id;


};
int main(){
    students s1;
    

    cout<<"Enter the name : "<<endl;
    cin>>s1.name;

    cout<<"Enter the Roll no : "<<endl;
    cin>>s1.roll_no;

    cout<<"Enter the Class : "<<endl;
    cin>>s1.class_room;

    cout<<"Enter the Student id  : "<<endl;
    cin >> s1.st_id;

    cout << "\n--- Student Details ---\n";


    cout<<"Name :"<<s1.name<<endl;
    cout<<"Roll No :"<<s1.roll_no<<endl;
    cout<<"Class :"<<s1.class_room<<endl;
    cout<<"Student Id :"<<s1.st_id<<endl;

    return 0;
}