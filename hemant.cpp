#include<iostream>
using namespace std;
int main()
{
    int x,y=0,z=0;
    cin>>x;
    while(x!=0)
    {
    y=x%10;
    z+=y;
    x=x/10;
    }
    cout<<z;
    return 0;
}