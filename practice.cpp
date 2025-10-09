#include <iostream>
#include <string.h>

using namespace std;

class fruits{
public:
    string name;
    string colour;
    float price;

    fruits(){
        name= "Mango";
        colour="Yellow";
        price= 12;

    }
    
    fruits( string name,string colour,float price){
      this->  name=name;
       this->  colour=colour;
       this->  price= price;

    }

    fruits( fruits & f2){
        name= f2.name;
        colour= f2.colour;
        price= f2.price;
    }

    void display(){
        cout<<"Name :- "<< name<< endl;
        cout<<"Colour :- "<< colour<< endl;
        cout<<"Price :- "<< price << endl;
    }
};

int main(){
    
    fruits f1;

    f1.display();
    cout<<endl;

    fruits f2("Apple" , "Red", 910.09 );
    f2.display();
    cout<< endl;
    
    fruits f3(f2);
    f3.display();
    cout<< endl;
   
     return 0;

}