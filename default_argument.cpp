#include <iostream>
#include <string>

using namespace std;

void student( string name="Manish" , int age = 20){

    cout<<"Name :- "<< name  << " , Age :- "<< age<< endl;

}

int main(){

    student();
    student("Amit" , 19);
    student("Lucky" );
    student("Yogi" );
    student("Shivani" , 21 );
    student("Nishant" , 24 );

    return 0;

}