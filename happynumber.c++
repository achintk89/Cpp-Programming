
#include<iostream>
using namespace std;
int main()
{
    int A, B, digit, sum = 0,temp;
    cin>>A>>B;
    temp = A;
    while (1)
    {
        if(A==0)
        {
            temp++;
            A=temp;
        }
        if(temp>B)
            break;

        digit = A % 10;
        sum  = sum + digit;
        A /= 10;
    }
    cout<<sum;
    return 0;
}