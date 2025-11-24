#include <iostream>
using namespace std;

template < class T>
T sum(T b , T c){
    return b + c;
}

int main(){
    cout<<sum(4 , 7)<<endl;
    cout<<sum(9.8 , 5.5)<<endl;

    return 0;
}