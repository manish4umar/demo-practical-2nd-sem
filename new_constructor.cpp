#include <iostream>
#include <string>

using namespace std;

class Bca{
    public:
    int roll_no;
    string name;
    int id;

    Bca(){
        roll_no= 100;
        name= "Manish kumar";
        id= 190;
     }

    Bca(int roll_no , string name, int id){
    this->roll_no= roll_no;
    this->name= name;
    this->id= id; 
    } 

    Bca( Bca & b1){
        roll_no= b1.roll_no;
        name= b1.name;
        id= b1.id;
        
    }

    void display(){
        cout<<"Name:-"<<name<<endl;
        cout<<"Roll No:-"<<roll_no<<endl;
        cout<<"Id:-"<<id<<endl;
    }
    
};

int main(){
    Bca b;
    b.display();
    Bca b1(19 , "Koko", 011);
    b1.display();
    Bca b2(b1);
    b2.display();

    return 0;

}