#include<iostream>
using namespace std;
class student
{
private:
    char name[15];
    int id;
    float m1,m2,m3;
public:
    void setdata()
    {
        cout<<"Enter your name and id"<<endl;
        cin>>name>>id;
    }
    void setmarks()
    {
        cout<<"Enter your 3 subject marks"<<endl;
        cin>>m1>>m2>>m3;
        calculateAvg();
    }
    void calculateAvg()
    {
        float avg;
        avg = (m1+m2+m3)/3;
        cout<<"Average is: "<<avg<<endl;
    }

};
int main()
{
    student s1;
    s1.setdata();
    s1.setmarks();
    student s2;
    s2.setdata();
    s2.setmarks();
    return(0);
}
