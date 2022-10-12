//convert all element of array to 1 by using some operation
//1-a[i] divide by 2 if it is even
//2-can add and odd no. if it is odd
#include <bits/stdc++.h>
using namespace std;
int makeones(int n, vector<int> a)
{
    int count = 0, ans;
    if (n == 1 && a[0] == 1)
        return 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            while (a[i] != 1)
            {
                if (a[i] % 2 == 0)
                {
                    count++;
                    a[i] = a[i] / 2;
                }
                else
                {
                    count++;
                    a[i] = a[i] + 1;
                }
            }
        }
            else
            {
                while (a[i] != 1)
                {
                    if (a[i] % 2 == 0)
                    {
                        count++;
                        a[i] = a[i] / 2;
                    }
                    else
                    {
                        if (a[i] < 8)
                        {
                            ans = 8 - a[i];
                            count++;
                            a[i] = a[i] + ans;
                        }
                        if (a[i] < 4)
                        {
                            ans = 4 - a[i];
                            count++;
                            a[i] = a[i] + ans;
                        }
                    }
                }
            }
            
     }
     return count;
}
        int main()
        {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++)
                cin >> a[i];
            cout << makeones(n, a);
            return 0;
        }