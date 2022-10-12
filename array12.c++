//number of strictly increasing subarrays
#include <iostream>
using namespace std;
 

int fun(int arr[], int n)
{
   
    int count = 0;
 
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            
            if (arr[j] >= arr[j-1])
            {
              
                count++;
            }
            else
            break;
        }
    }
 
   
    return count;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<fun(arr,n);
    }
    return 0;
}