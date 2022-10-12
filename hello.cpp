#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=5,&y=x,&z=y;
    ++z;
    cout<<z<<endl;
    
    cout<<x;
    return 0;
}