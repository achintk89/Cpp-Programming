//given range check a no is prime or not then check its sum of digit is divisible by k
//return an array answering the q queries modulo 93179 
#include <bits/stdc++.h>
using namespace std;
vector<long> solve(int K, vector<long> L, vector<long> R)
{
    int i,j,m,ans;
    vector<long>q(L.size());
    for (i = 0; i < L.size(); i++)
    {
        ans=1;
        for (m = L[i]; m <= R[i];m++)
        {
            for (j = 2; j < m; j++)
            {
                if (m % j == 0)
                {
                    break;
                }
            }
            if(j==m)
            {
                int sum,digit,rem;
                digit=m;
                sum=0;
                rem=0;
                while(digit!=0)
                {
                    rem=digit%10;
                    sum=sum+rem;
                    digit=digit/10;
                }
                if(sum%K==0)
                {
                    ans=ans*m;
                }
            }
        }
        q[i]=ans%93179;

    }
    return q;
}
int main()
{
    int n,K;
    cin>>K>>n;
    vector<long>L(n);
    for(int i=0;i<n;i++)
    {
        cin>>L[i];
    }
    vector<long>R(n);
    for(int i=0;i<n;i++)
    {
        cin>>R[i];
    }
    vector<long>ans(n);
    ans=solve(K,L,R);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;

}