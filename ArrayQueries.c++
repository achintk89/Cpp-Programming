#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int N, vector<int> A, int Q, vector<vector<int>> query)
{
    vector<int> res(Q);
    for (int i = 0; i < Q; i++)
    {
        vector<int> B = A;
        int R = query[i][2];
        if(i%2==0)
        {
        B[R-2] = 1 - max(B[R-2], B[R-3]);
        B[R-1] = 1 - max(B[R-1], B[R-2]);
        res[i]=B[R-1];
        }
        else{
        B[R-2] = 1 - min(B[R-2], B[R-3]);
        B[R-1] = 1 - min(B[R-1], B[R-2]);
        res[i]=B[R-1];

        }
    }
    return res;
}
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int j = 0; j < N; j++)
            cin >> A[j];
        int Q;
        cin >> Q;
        vector<vector<int>> query(Q, vector<int>(3));
        for (int i = 0; i < Q; i++)
        {
            for (int j = 0; j < 3; j++)
                cin >> query[i][j];
        }
        vector<int>out;
        out=solve(N,A,Q,query);
        cout<<out[0];
        for(int i=1;i<out.size();i++)
        {
            cout<<" "<<out[i];
        }
        cout<<"\n";
    }
    return 0;
}