#include <iostream>
using namespace std;

int main()
{
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1;i <= rows; ++i)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

         for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";
        if(i==rows)
        {
        for(int j = 0; j < i-1; ++j)
            cout << "* ";
        }

        cout << endl;
    }
    for(int i = rows-1; i >= 1; --i)
    {
        for(int space = 0; space <rows -1; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        cout << endl;
    }
    return 0;
}