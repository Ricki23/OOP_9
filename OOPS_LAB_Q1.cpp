#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual void Area()
    {
        cout<<"******Area of Shapes******"<<endl;
    }
};
class Square:public Shape
{
    public:
    int s;
    void Area()
    {
        float area;
        cout<<"Enter the side of square:"<<endl;
        cin>>s;
        area=s*s;
        cout<<"Area of square is:"<<area<<endl;
    }
    operator =(Square *s1)
    {
        Square t1;
        t1.s=s1->s;
    }
};
class Triangle:public Shape
{
    public:
    int b;
    int h;
    void Area()
    {
        float area;
        cout<<"Enter the base length of the triangle:"<<endl;
        cin>>b;
        cout<<"Enter the height of the triangle:"<<endl;
        cin>>h;
        area=0.5*b*h;
        cout<<"Area of Triangle:"<<area<<endl;
    }
    operator =(Triangle *s1)
    {
        Triangle t1;
        t1.b=s1->b;
        t1.h=s1->h;
    }
};
class Circle:public Shape
{
    public:
    int r;
    void Area()
    {
        float area;
        cout<<"Enter the radius of the Circle:"<<endl;
        cin>>r;
        area=3.14*r*r;
        cout<<"Area of Circle is:"<<area<<endl;
    }
    operator =(Circle *s1)
    {
        Circle t1;
        t1.r=s1->r;
    }
};
int main()
{
    Shape *s;
    Circle c;
    Triangle t;
    Square s1;
    s=&c;
    s->Area();
    s=&t;
    s->Area();
    s=&s1;
    s->Area();
}