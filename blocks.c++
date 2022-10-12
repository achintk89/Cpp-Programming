//find the difference b/w no of blocks in the biggest
//building and the smallest one after k minutes
#include <bits/stdc++.h>
using namespace std;
int maxDif(int N, int K, vector<int> Arr)
{
    int max = 0;
    for (int i = 0; i < K; i++)
    {
        sort(Arr.begin(), Arr.end());
        int diff = Arr[N - 1] - Arr[0];
        if (diff == 0)//if all elemnts in aray are same
        {
            return max;
        }
        else if (diff >= 1)//dec biggest by one ad inc smallest by one
        {
            Arr[N - 1]--;
            Arr[0]++;
        }
    }
    sort(Arr.begin(), Arr.end());
    max = Arr[N - 1] - Arr[0];
    return max;
}
int main()
{
    int N, K, t;
    cin >> N >> K;
    vector<int> Arr;
    for (int i = 0; i < N; i++)
    {
        cin >> t;
        Arr.push_back(t);
    }
    cout << maxDif(N, K, Arr);
    return 0;
}