//print no. of two wheeler and four wheeler can be made
#include <iostream>
using namespace std;
int main()
{
    int v = 0, w = 0, tw, fw;
    cin >> v >> w;
    fw = (w - (2 * v)) / 2;
    tw = v - fw;
    if (w >= 2 && w % 2 == 0 && w > v)
    {
        fw = (w - (2 * v)) / 2;
        tw = v - fw;
        cout << "TW= " << tw << " " << "FW= " << fw;
    }
    else
    {
        cout << "INVALID INPUT";
    }
    return 0;
}
