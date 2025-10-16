#include <iostream>
#include <string>
using namespace std;

class Book{
public:
    string Author;
    string Title;
    float price;

};

int main() {
               Book b;
               cout<<"Enter Author Name = ";
               cin>>b.Author;

               cout<<"Enter Title Name = ";
               cin>>b.Title;

               cout<<"Enter Price= ";
               cin>>b.price;
cout<<endl<<endl;
               cout<<"Author = "<<b.Author<<endl;
               cout<<"Title = "<<b.Title<<endl;
               cout<<"Price = "<<b.price<<endl;
    return 0;
}