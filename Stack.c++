#include<iostream>
using namespace std;
#define n 100

class stack
{
    int *arr;
    int top;
    public:
    stack()
    {
        arr=new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(isfull())
            return;
        top=top+1;
        arr[top]=x;
    }
    void pop()
    {
        if(isempty())
            return;
        cout<<"Pop: "<<arr[top]<<endl;
        top=top-1;
    }
    int isfull()
    {
        if(top==n-1)
        {
            cout<<"Stack Overflow"<<endl;
            return 1;
        }
        else return 0;

    }
    int isempty()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return 1;
        }
        else return 0;
    }
    void show()
    {
        if(top==-1)
        {
            cout<<"Satck is empty"<<endl;
            return;
        }
        for(int i=0;i<=top;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main()
{
    int x,y;
    cout<<"Enter how many values you want in Stack"<<endl;
    cin>>x;
    stack s;
    cout<<"Enter values in Stack"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>y;
        s.push(y);
    }
    s.show();
    for(int i=0;i<x;i++)
    {
        s.pop();
    }
    s.pop();
    s.show();
    return 0;
}