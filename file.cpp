#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("MYFILE.dat",ios::ate);
    cout<<fout.tellp();
    fout<<"ABCDEF";
    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp();
    fout<<"hi";

    fout.close();
    getch();
}
