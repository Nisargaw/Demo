#include<iostream>
using namespace std;
class test
{
private:
    int i,j,z;
public:
    test()
    {
        i = 200;
        j = 300;
        cout<<"constructor without arg called"<<endl;
    }
    test(int x,int y)
    {
        i = x;
        j = y;
        cout<<"constructor with arg called"<<endl;
    }
    void add()
    {
        z = i + j;
        cout<<"addition is "<<z<<endl;
    }
};
int main()
{
    test t1;
    t1.add();
    test t2(100,200);
    t2.add();
    return(0);
}

