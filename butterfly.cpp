#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p,n,i;
    cin>>n;
    p=(int*)malloc(n*sizeof(int))
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i];
    }
    return 0;
}