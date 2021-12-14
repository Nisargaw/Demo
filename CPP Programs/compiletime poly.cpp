#include<iostream>
#include<string.h>
using namespace std;
class test
{
public:
    void add(int x,int y)
    {
        cout<<"INT ADD CALLED"<<endl;
        cout<<x+y<<endl;
    }
    void add(float x,float y)
    {
        cout<<"FLOAT ADD CALLED"<<endl;
        cout<<x+y<<endl;
    }
    void add(char*x,char* y)
    {
        char x1[15];
        strcpy(x1,x);
        strcat(x1,y);
        cout<<x1;
    }
};
int main()
{
    test t1;
    t1.add(1.2f,2.3);
    t1.add(2,3);
    t1.add("hello","world");
    return(0);

}
