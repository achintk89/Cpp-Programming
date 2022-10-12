#include<iostream>
using namespace std;
int main()
{
    int i,j,r,space=0;
    cout<<"Enter no. of rows";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=r;j++)
        {
            if(i==1){
                cout<<"*";
            }
            else {
                if(j==1 || j==r)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        space+=2;
        for(j=1;j<=r;j++)
        {
            if(i==1){
                cout<<"*";
            }
            else {
                if(j==1 || j==r)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    space=2;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=r;j++)
        {
            if(i==r){
                cout<<"*";
            }
            else {
                if(j==1 || j==r)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        for(j=1;j<=2*r-space;j++)
        {
            cout<<" ";
        }
        space+=2;
        for(j=1;j<=r;j++)
        {
            if(i==r){
                cout<<"*";
            }
            else {
                if(j==1 || j==r)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;

}