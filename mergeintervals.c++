//********** Merge Intervals unsing stack **********

#include <bits/stdc++.h>
using namespace std;

class Interval
{
public:
    int start;
    int end;
};

stack<Interval> mergeIntervals(Interval *arr, int n)
{
    stack<Interval> s;
    s.push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        Interval top = s.top();
        int x1 = arr[i].start;
        int y1 = arr[i].end;
        int x2 = top.start;
        int y2 = top.end;

        if (y2 >= x1)
        {
            top.end = max(y1, y2);
            top.start = min(x1, x2);
            s.pop();
            s.push(top);
        }
        else
        {
            s.push(arr[i]);
        }
    }
    return s;
}

void printstack(stack<Interval> &s)
{
    while (!s.empty())
    {
        Interval t = s.top();
        s.pop();
        printstack(s);
        cout << "[" << t.start << "," << t.end << "] ";
    }
}

int main()
{
    Interval arr[] = {{1, 3}, {2, 5}, {7, 9}};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (n > 0)
    {
        stack<Interval> result = mergeIntervals(arr, n);
        printstack(result);
    }
    else
        cout << "No intervals";
    return 0;
}