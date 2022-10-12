#include<bits/stdc++.h>
using namespace std;
int MinimumLength(int N,int K,vector<int>A,vector<int>C)
{
    int temp,sum=0,l=1;
    for(int i=0;i<=N;i=i+l)
    {
        if(i==N-1)
            sum+=A[i];
        else if(sum<=K && C[i]!=C[i+1])
        {
            sum+=A[i];
        }
        else if(C[i]==C[i+1])
            continue;
        else if(sum>K){
            i=0;
            l++;
            sum=0;
        }
    }
    return l;
}
