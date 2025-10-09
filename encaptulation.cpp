#include <iostream>
#include <string>
using namespace std;

class department {
    public:
            string department;
            int batch;
    
    private: 
             int salary;        
     

};
int main() {
     
    department d;
    d.department= "Hr";
    d.batch= 2024;
    cout<<"Department = "<<d.department<<endl;
    return 0;
}