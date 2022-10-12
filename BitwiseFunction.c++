#include<bits/stdc++.h>
using namespace std;

long long solve(int N,int X,int Y,vector<int>A,vector<int>B)
{
    long long res=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            int a=(A[i]^B[j])&X;
            int b=(A[i]^B[j])&Y;
           if(a==b)
                res++;
        }
    }
    return res;

}
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
        int X;
        cin>>X;
        int Y;
        cin>>Y;
        vector<int>A(N);
        for(int j=0;j<N;j++)
            cin>>A[j];
        vector<int>B(N);
        for(int j=0;j<N;j++)
            cin>>B[j];
        long long out;
        out=solve(N,X,Y,A,B);
        cout<<out;
        cout<<"\n";
    }
    return 0;
}
