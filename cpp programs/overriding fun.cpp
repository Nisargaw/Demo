#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout<<"IN A"<<endl;
    }
};
class B : public A
{
    void show()
    {
        cout<<"IN B"<<endl;
    }
};
int main()
{
    A ob;
    ob.show();
    return(0);
}
