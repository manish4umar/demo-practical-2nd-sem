#include <iostream>
#include <string>
using namespace std;

class bca{
    
    public:
        string name;
        int roll_no;
        float marks;

        bca(){
            name= "unknown";
            roll_no= 0;
            marks= 0;
        }

        bca(string name , int roll_no , float marks){
           this-> name= name;
           this-> roll_no = roll_no;
          this->  marks = marks;
        }

        bca( bca & b2){
            name= b2.name;
            roll_no = b2.roll_no;
            marks = b2.marks;
        }
 
void display(){
    cout<<"Name :"<< name<<endl;;
    cout<<"Roll no :"<< roll_no<<endl;;
    cout<<"Marks :"<< marks<<endl;;
}}
    
;


int main(){
    bca b1;
    b1.display();
     cout << endl;

     bca b2( "Manish ", 19 , 67.9);
     b2.display();
     cout<< endl;

     bca b3(b2);
     b3.display();
    return 0;


}