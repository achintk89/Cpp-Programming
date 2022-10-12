//Print words of a string in reverse order
#include <bits/stdc++.h>
using namespace std;
string reverse(string s)
{
    int i = s.length()-1;
    int start,end = i+1;
    string result;
    while(i >= 0)
    {
        if(s[i] == ' ')
        {
            start = i + 1;
            while(start != end)
                result += s[start++];
             
            result += ' ';
             
            end = i;
        }
        i--;
    }
    start = 0;
    while(start != end)
        result += s[start++];
    return result;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<reverse(s);
    return 0;
}