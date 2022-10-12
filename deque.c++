// Sliding Window MAximum usign Deque
#include <bits/stdc++.h>
#include <deque>
using namespace std;


void printKMax(int a[], int n, int k)
{
    deque<int> q;
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && a[q.back()] < a[i])
            q.pop_back();
        q.push_back(i);
    }
    cout << a[q.front()] << " ";
    for (int i = k; i < n; i++)
    {
        if (q.front() == i - k)
            q.pop_front();
        while (!q.empty() && a[q.back()] < a[i])
            q.pop_back();
        q.push_back(i);
        cout << a[q.front()] << " ";
    }
}

// Driver code
int main()
{
    int arr[] = {12, 1, 78, 90, 57, 89, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printKMax(arr, n, k);
    return 0;
}
