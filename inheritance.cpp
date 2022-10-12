#include<iostream>
#include<string.h>
using namespace std;
class person
{
    private:
    string name;
    public:
    void set1(string x)
    {
        name=x;
    }
    void show(){
        cout<<"My name is "<<name<<endl;
    }
};
class student:public person
{
    public:
    int rollno;
    /*void show()
    {/*cout<<"My name is "<<name<<endl;
    cout<<"My rollno. is "<<rollno<<endl;

    }*/
};
class teacher:public person
{
    public:
    int tid;
   /* void print()
    {
    /*cout<<"My name is "<<name<<endl;
    cout<<"My rollno. is "<<tid;

    }*/

};
int main()
{
    student b1;
    teacher t1;
    person p;
    b1.set1("Anjali");
    t1.set1("Achint");
    b1.show();
    t1.show();
    b1.rollno=3;
    t1.tid=4;
    p.show();
    return 0;
}