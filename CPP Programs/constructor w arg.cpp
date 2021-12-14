#include<iostream>
using namespace std;
class area
{
private:
    float r,a;
public:
    area(float r1)  //constructor with argument
    {
        r = r1;
        cout<<"constructor called!!"<<endl;
    }
    void calculatearea()
    {
        a = 3.14*r*r;
        cout<<"area is "<<a<<endl;
    }

};
int main()
{
     area ob(1.2);
     ob.calculatearea();
     area obb(2.2);
     obb.calculatearea();
     return(0);
}


