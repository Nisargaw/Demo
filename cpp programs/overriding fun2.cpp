#include<iostream>
using namespace std;
class A
{
public:
    void toString()
    {
        cout<<"This is object of A class"<<endl;
    }
};
class B : public A
{
public:
    void toString()
    {
        cout<<"This is object of B class"<<endl;
    }
};
int main()
{
    A ob1;
    ob1.toString();
    B ob2;
    ob2.toString();
    return(0);
}
