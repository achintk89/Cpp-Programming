#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    private:
    int roll;
    string p;
    public:
    void setdata(string ptr,int x)
    {
        p=ptr;
        roll=x;
    }
    void showdata()
    {
        cout<<endl<<roll<<endl<<p;
    }
};
int main()
{
    student s1;
    s1.setdata("Achint",1);
    s1.showdata();
    return 0;
}
