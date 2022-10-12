#include<iostream>
#include<algorithm>
using namespace std;

int compare(int a, int b){
    if(a>b)
      return a;
    else if(a=b)
      return b;
    else if(a<b)
      return b;
}

int maxsubarraysum(int a[],int n){
    int curr = 0;
    int max = 0;
    for(int i=0;i<n;i++){
        curr = curr + a[i];
        max = compare(curr,max);
      //  if(max < curr)
      //    max = curr;
        if(curr<0)
            curr = 0;
    }
    return max;
}

int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxsum = maxsubarraysum(arr,n);
    cout<<"maximum contiguous sum is: "<<maxsum<<endl;
    return 0;
}