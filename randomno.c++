///****print random no of 8 digit last digit cannot be 0****
#include <iostream>
#include <inttypes.h>
#include <cstdint>
using namespace std;
int main()
{
    int *p;
    p = new int();
    int res = ((intptr_t)p % 89999999) + 10000001;
    cout << res;
    return 0;
}