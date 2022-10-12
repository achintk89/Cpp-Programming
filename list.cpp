#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1={20,55,7,60,7,7};
    list<int>::iterator p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    return 0;
}