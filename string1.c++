///check whether a strin contain golden substring
#include <bits/stdc++.h>
using namespace std;
int checkstring(string a)
{
    int index, count, n = 3;
    string s = "";
    for (int i = 0; i < a.length(); i++)
    {
        count = 0;
        index = 0;
        for (int j = 0; j < a.length(); j++)
        {
            if (a[i] == a[j])
            {
                count++;
                index = j;
            }
        }
        if ((index - i + 1) >= n && count > (index - i + 1) / 3)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    string a;
    cin >> a;
    cout << checkstring(a);
    return 0;
}