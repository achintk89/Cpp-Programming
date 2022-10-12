//count accurence of no. in mod[]array 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, K, M;
        cin >> N >> K >> M;
        int X = 0;
        int mod[N+1];
        int Ai[M];
        
        for (int j = 0; j <= N; j++)
        {
            mod[j] = X % M;
            X = X + K;
        }
        for (int j = 0; j < M; j++)
        {
            int x = 0,count=0;
            while (x != N+1)
            {
                if (mod[x] == j)
                    count++;
                x++;
            }
            Ai[j]=count;
        }
        for (int j = 0; j < M; j++)
            cout << Ai[j] << " ";
        cout<<endl;
    }
    return 0;
}