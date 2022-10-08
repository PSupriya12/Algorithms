//implementation of virtual functions
#include<iostream>
using namespace std;
class A
{
    int a;
 public:
    virtual void set()
    {
        cout<<"\nA a:";
        cin>>a;
    }
    virtual void display()
    {
        cout<<"\nA a:"<<a;
    }
};

class B:public A
{
    int b;
 public:
    void set()
    {
        cout<<"\nB b:";
        cin>>b;
    }
    void display()
    {
        cout<<"\nB b"<<b;
    }
};

class C:public B
{
    int c;
 public:
    void set()
    {
        cout<<"\nC c:";
        cin>>c;
    }
    void display()
    {
        cout<<"\nC c:"<<c;
    }
};

int main()
{
    A *aptr;
    A obja;
    aptr=&obja;
    aptr->set();
    aptr->display();
    B objb;
    aptr=&objb;
    aptr->set();
    aptr->display();
    C objc;
    aptr=&objc;
    aptr->set();
    aptr->display();
}