// find no of substring such that 
//X<=(count of A - count of B)<=Y
#include <bits/stdc++.h>
using namespace std;

int countSubarrays(int N, int X, int Y, string S)
{
    int A, B, diff, sub = 0;
    vector<string> sub1;

    for (int i = 0; i < N; i++)
    {
        string substr;
        // Second loop is generating sub-string 
        //and storing to array
        for (int j = i; j < N; j++)
        {
            substr += S[j];
            sub1.push_back(substr);
        }
    }
    for (int i = 0; i < sub1.size(); i++)
    {
        string substr;
        substr+=sub1[i];
        A = 0;
        B = 0;
        diff = 0;
        for (int k = 0; k < substr.length(); k++)
        {
            if (substr[k] == 'A')
                A++;
            else
                B++;
        }
        diff = A - B;
        if (diff >= X && diff <= Y)
            sub++;
    }
    return sub % 1000000007;
}
int main()
{
    int X, Y, N;
    string S;
    cin >> N >> X >> Y >> S;
    cout << countSubarrays(N, X, Y, S);
    return 0;
}