//sort the array in such a way that even indices sorted seperate
//and odd seperate and the element that were at even indices remain
//at even indices in the resultant array and likewise for odd
#include <bits/stdc++.h>
using namespace std;

vector<long>solution(vector<long>array)
{
    vector<long>even;
    vector<long>odd;
    for(int i=0;i<array.size();i++)
    {
        if(i%2==0)
            even.push_back(array[i]);
        else
            odd.push_back(array[i]);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    int j=0;
    int k=0;
    for(int i=0;i<array.size();i++)
    {
        if(i%2==0)
            array[i]=even[j++];
        else
            array[i]=odd[k++];
    }
    return array;
}
int main()
{
    vector<long>array{4,2,5,1,6,8,1};
    array=solution(array);
    for(int i=0;i<array.size();i++)
        cout<<array[i]<<" ";
    return 0;
}