#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p,n,i;
    cout<<"Enter size of array";
    cin>>n;
    p=(int*)malloc(n*sizeof(int));
    cout<<p[0];
    /*cout<<"enter a value";
    cin>>i;
    *p=i;
    cout<<*p<<endl;
    for(i=1;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<p[1];*/
    return 0;
}