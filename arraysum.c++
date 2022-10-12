//Find min sum of array 
#include <iostream>
using namespace std;
int main()
{
    int N=0,sum=0,a,count=0;
    cin>>N;
    int arr[100];
    for(int i=0;i<N;i++)
    {
        cin>>a;
        if(a<0)//for -ve value
        {
            count=1;
            break;
        }
        /*else if(i>=N){
            count=1;
            break;
        }*/
        else
        arr[i]=a;
    }
    if(count==0)
    {
    for(int j=0;j<N-1;j++)
    {
        if(arr[j]==arr[j+1])//foe same value change it
        arr[j+1]+=1;

    }
    for(int k=0;k<N;k++)
    {
        sum+=arr[k];
    }
    cout<<sum;
    }
    else
    cout<<"Wrong Input";
    return 0;
}

