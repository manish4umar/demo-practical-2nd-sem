#include <iostream>
using namespace std;

template<class t>
class bca{
    public:

    t room(t a){
        return a;
    }
};
int main(){
    bca<int> b1;
   cout<<"Room no :-"<< b1.room(25)<< endl;

   bca<string> b2;
   cout<<"Studet name :- "<<b2.room("manish")<< endl;
   return 0;

}