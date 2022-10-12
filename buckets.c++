/*Taru exam is on the head. So she started learning physics. There she learned about Pascal's law. Now she wanted to try an experiment to get a better understanding of the same.

For the experiment Taru has N buckets (numbered from 1,2,3...N) which all are initially empty. She has M number of queries. Each query represents an integer that is of 4 types.

Query 1: Fill all the buckets with water.

Query 2: Empty all even valued buckets (2, 4, 6 (N).

Query 3: Empty all odd number buckets (1, 3, 5,

Query 4: Empty all the buckets. (1,2,3...N).

You have to return the number of buckets that are filled after performing M queries.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
int N, M,F,c;
cin >> N >> M;
for (int i = 1; i <= M; i++)
{
    cin>>F;
    if (F == 1)
        c = N;

    if (F == 2)
        if (N % 2 == 0)
            c = N / 2;
        else
            c = (N + 1) / 2;
    if (F == 3)
           c = N/2;
    if (F == 4)
        c=0;
}
cout<<c;
return 0;
}