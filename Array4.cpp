//minimum index of first occurance of repeating no.
#include<iostream>
using namespace std;

void repeating(int a[],int n){
    int j=0;
    for(int i=1;i<=n;i++)
        {
            if(a[j]==a[i])
            {
                cout<<j;
                break;
            }
            else if(i==n)
            {
                j++;
                i=1;
            }

        }
}

int main(){
    int arr[] = {10,5,3,4,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    repeating(arr,n);
    return 0;
}