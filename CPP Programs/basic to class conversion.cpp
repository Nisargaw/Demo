#include<iostream>
using namespace std;
class Time
{
private:
    int hour,min;
public:
    Time(int m)
    {
        hour = m/60;
        min = m%60;
    }
    void showTime()
    {
        cout<<"Time ="<<hour<<":"<<min<<endl;
    }
};
int main()
{
    int x = 100;
    Time t1 = x;
    t1.showTime();
    return(0);
}
