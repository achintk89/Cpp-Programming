//maximun score of subarray
#include<bits/stdc++.h>
using namespace std;
 int MaxScore(int N, vector<int> AR)
 {
     int min,t,score=0,count,sum;
     for(int i=0;i<N;i++)
     {
         for(int j=i;j<=N;j++)
         {
             min=AR[i];
             count=0;
             sum=0;
             for(int k=i;k<j;k++)
             {
                 sum=sum+AR[k];
                 count++;
                 if(AR[k]<min)
                    min=AR[k];
                 
             }
             t=sum+(min*count);
             score=max(t,score);
         }
     }
     return score;
 }
int main()
{
    int N,a;
    cin>>N;
     vector<int>AR;
    for(int i=0;i<N;i++)
    {
        cin>>a;
        AR.push_back(a);
    }
    cout<<MaxScore(N,AR);
    return 0;
}