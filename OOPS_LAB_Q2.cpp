#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class Emp
{
    public:
    char emp_name[50];
    int emp_id;
    int emp_salary;
    virtual void gets1()
    {
        cout<<"Enter the employee name:";
        getchar();
        gets(emp_name);
        cout<<"Enter the ID:";
        cin>>emp_id;
        cout<<"Enter the salary:"<<endl;
        cin>>emp_salary;
    }
    void display1()
    {
        cout<<"The details are:-"<<endl;
        cout<<"Name:-"<<emp_name<<endl;
        cout<<"ID:-"<<emp_id<<endl;
        cout<<"Salary:-"<<emp_salary<<endl;
    }
};
class Regular:public Emp
{
    public:
    int da;
    int hra;
    int basic_sal;
    void gets1()
    {
        int tot;
        Emp e1;
        e1.gets1();
        cout<<"Enter the basic Salary:"<<endl;
        cin>>basic_sal;
        da=0.5*basic_sal;
        hra=0.25*basic_sal;
        tot=basic_sal+da+hra;
        e1.display1();
        cout<<"Basic Salary:-"<<basic_sal<<endl;
        cout<<"DA:-"<<da<<endl;
        cout<<"HRA:-"<<hra<<endl;
        cout<<"Total Salary:"<<tot<<endl;
    }
    operator =(Regular *r1)
    {
        Regular t1;
        t1.da=r1->da;
        t1.hra=r1->hra;
        t1.basic_sal=r1->basic_sal;
    }
};
class Parttime:public Emp
{
    public:
    int no_of_houres;
    int pay_per_hour;
    void gets1()
    {
        int tot;
        Emp e2;
        cout<<"Enter the pay per hour:"<<endl;
        cin>>pay_per_hour;
        cout<<"Enter the total number of hours:"<<endl;
        cin>>no_of_houres;
        tot=pay_per_hour*no_of_houres;
        e2.gets1();
        cout<<"No of Houres:"<<no_of_houres<<endl;
        cout<<"Pay per hour:"<<pay_per_hour<<endl;
        cout<<"Total salary:"<<tot<<endl;
    }
    operator =(Parttime *t1)
    {
        Parttime r1;
        r1.no_of_houres=t1->no_of_houres;
        r1.pay_per_hour=t1->pay_per_hour;
    }
};
int main()
{
    int option;
    cout<<"\n1.Regular Employee:"<<endl;
    cout<<"\n2.Parttime Employee:"<<endl;
    cout<<"\nEnter your choice:"<<endl;
    cin>>option;
    if(option==1)
    {
        Emp *e1;
        Regular r1;
        e1=&r1;
        e1->gets1();
    }
    if(option==2)
    {
        Emp *e1;
        Parttime t1;
        e1=&t1;
        e1->gets1();
    }
}