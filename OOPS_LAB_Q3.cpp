#include<iostream>
using namespace std;
class Base
{
    public:
    int x;

    virtual void func()=0;
    int gets()
    {
        return x;
    }
};
class Derived:public Base
{
    public:
    int y;

    void func()
    {
        cout<<"In derived class:"<<endl;
    }
};
int main()
{
    Derived D;
    D.func();
    return 0;
}