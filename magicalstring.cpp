// C++ program to find maximum length equal
// character string with k changes
#include <iostream>
using namespace std;

// function to find the maximum length of
// substring having character ch
int solution(string str, int k)
{
    int n = str.length();
    int maxlen = 1;
    for (int i = 0; i < 26; ++i)
    {
        char ch = i + 'A';
        int len = 1;
        int cnt = 0;
        int l = 0, r = 0;

        while (r < n)
        {

            if (str[r] != ch)
                ++cnt;

            while (cnt > k)
            {
                if (str[l] != ch)
                    --cnt;
                ++l;
            }

            len = max(len, r - l + 1);
            ++r;
        }
        maxlen = max(maxlen, len);

        char ch1 = i + 'a';
        int len1 = 1;
        int cnt1 = 0;
        int l1 = 0, r1 = 0;

        while (r1 < n)
        {

            if (str[r1] != ch1)
                ++cnt1;

            while (cnt1 > k)
            {
                if (str[l1] != ch1)
                    --cnt1;
                ++l1;
            }

            len1 = max(len1, r1 - l1 + 1);
            ++r1;
        }
        maxlen = max(maxlen, len1);
    }
    return maxlen;
}

// Driver code
int main()
{
    int k;
    string A;
    cin>>A>>k;
    cout << "Maximum length = " << solution(A, k) << endl;
    return 0;
}
