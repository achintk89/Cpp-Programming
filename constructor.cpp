#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    int x,y;

    public:
    A()//default constructor
    {
    }
    A(int a,int b)//parametrized constructor
    {
        x=a; y=b;
    }
    void show()
    {
        cout<<x<<" "<<y;
    }
    A(A &c){
        x=c.x;
        y=c.y;
    }
};
int main()
{
    A c2(7,6),c1(c2);
    c1.show();
    return 0;
}