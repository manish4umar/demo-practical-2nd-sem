#include <iostream>
#include <string>
using namespace std;


int main(){
    string name;

    int age;
    cout<< "Enter Your name :- " ;
     getline(cin, name)  ;
    cout<< "Enter Your Age :- "  ; 
    cin >> age ;
    cout <<"Your name is "<<name ;
    cout << " and age is"<< age;
    return 0;
}