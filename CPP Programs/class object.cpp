#include<iostream>
using namespace std;
class test
{
private:
    void show()
    {
        cout<<"In private"<<endl;
    }
public:
    void display()
    {
        cout<<"In public"<<endl;
        show();
    }
};
int main()
{
    test ob;
    //ob.show(); It is in private section
    ob.display();
    return(0);

}
