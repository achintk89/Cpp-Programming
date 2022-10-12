#include <iostream>
#include <stdlib.h>
using namespace std;
class queue
{
public:
    int data;
    queue *next;
    queue *front;
    queue *back;

    queue()
    {
        next=NULL;
        front = NULL;
        back = NULL;
    }

    void createqueue(int x)
    {
        if(x==0||x<0)
        {
            cout<<"Invalid value"<<endl;
            return;
        }
        queue *n = new queue();
        if (back == NULL)
        {
            back = n;
            front = n;
        }
        for(int i=1;i<x;i++)
        {
            back->next = new queue();;
            back = back->next;
        }
        back=front;
    }
    void push(int x)
    {
        if(back==NULL)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        back->data=x;
        back=back->next;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "queue underflow" << endl;
            return;
        }
        queue *todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "No element in queue  ";
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        if (front == NULL)
            return true;
        return false;
    }
    void display()
    {
        while(front!=NULL)
        {
            cout<<front->data<<" ";
            front=front->next;
        }

    }
};
int main()
{
    queue q;
    int x;
    cout<<"enter size of queue"<<endl;
    cin>>x;
    q.createqueue(x);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    q.push(6);

    return 0;
}