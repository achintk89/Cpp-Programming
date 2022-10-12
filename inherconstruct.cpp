#include <iostream>
using namespace std;

class a
{
    int y;
public:
    a(int t)//parent class constructor call after child class but run first
    {
        y=t;
        cout<<"i am in a\n"<<y<<endl;
    }
    ~a()//parent class call and run after child class destructor
    {
        cout<<"i am in a\n";
    }
};
class b:public a
{
    int x;
public:
    b(int c):a(c)//constructor call first but run after parent class
    {
        x=c;
        cout<<"i am in b\n"<<x;
    }
    ~b()//destructor call and run first
    {
        cout<<"i am in b\n";
    }
};
int main()
{
    b b1(5);
    return 0;
}