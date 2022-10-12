#include<bits/stdc++.h>
using namespace std;
int findminimumDays(vector<float>d)
{
    sort(d.begin(),d.end());
    float t;
    int day=0,j,i;
    for(i=0;i<d.size();)
    {
        t=0.0;
        for(j=i;j<d.size();j++)
        {
           if((t+d[j])<=3.00)
           {
               t+=d[j];
           }
           else{
            break;
           }

        }
        day++;
        i=j;
    }
    return day;
}

int main()
{
    int n;
    cin>>n;
    vector<float>d(n);
    for(int i=0;i<n;i++)
        cin>>d[i];
    cout<<findminimumDays(d);
    
}