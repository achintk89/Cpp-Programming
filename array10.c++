///minimum color to pain doors
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, count = 1,i=0;
    cin >> N;
    vector<int> arr;
    for (int k = 0; k < N; k++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    for (int j = 1; j < N; j++)
    {
        if (i < j && arr[i] < arr[j])///condition for same color door door will be colored same
            continue;
        else//different color
        {
           count++;
           i++;
        }
    }
    cout<<count;
    return 0;
}