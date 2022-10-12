#include<bits/stdc++.h>
using namespace std;
int heightDifference(vector<int>height, int X)
{
    int count=1,diff=0;
    sort(height.begin(),height.end());
    for(int i=0;i<height.size()-1;i++)
    {
        if(diff==X)
            break;
        else if(height[i]<height[i+1])
            diff++;

        count++;
    }
    return count;
}
int main()
{
    vector<int>a{1,1,2,3};
    int g=heightDifference(a,2);
    cout<<g;
    return 0;
}