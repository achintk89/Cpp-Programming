//multiply k N times with i times to get ans 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int k=1;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        k=k*i;
    }
    k=k%(1000000007);
    cout<<k;

}