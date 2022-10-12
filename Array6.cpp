//Finding sum in array and print range of index from which the sum is found
#include<iostream>
using namespace std;

void subarray(int a[],int n,int sum){
    int currsum,*start,*end;
    start = a;
    end = a;
    currsum = 0;
    int startindx=0 , endindex=-1;
    for(int i=0;currsum!=sum;i++){

       if(currsum<sum&&((*end)!=a[n-1])){
        currsum += *end;
         end++;
         endindex++;
       }
       else if(currsum>sum){
           currsum -= *start;
           start++;
           startindx++;
       }
       else
        break;
    }
    if(currsum==sum)
        cout<<startindx<<" "<<endindex<<endl;
    else
        cout<<"No Sum Found";

}

int main(){
    int arr[] = {15,2,4,8,9,5,10,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 30;
    subarray(arr,n,sum);
    return 0;
}