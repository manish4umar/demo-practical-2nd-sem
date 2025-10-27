#include<iostream>
class A
{
    int n;
public:
 void getdata();
 void operatorss();
 void display();

};
void A :: getdata()
{
    std::cin>>n;
}
void A :: operatorss()
{
    n=n+2;
}
void A :: display()
{
    std::cout<<n;
}
int main()
{
    A a;
    a.getdata();
    a.operatorss();
    a.display();
     
    return 0;
}