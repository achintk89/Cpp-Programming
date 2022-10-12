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
        next = NULL;
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        queue *n = new queue();
        if (back == NULL)
        {
            back = n;
            front = n;
        }
        else
        {
            back->next = n;
            back = n;
        }
        back->data = x;
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
    void empty()
    {
        if (front == NULL)
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        cout<<"Queue is not Empty"<<endl;
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
    int x,y;
    cout << "Enter size of queue" << endl;
    cin >> x;
    cout<<"Enter values in queue"<<endl;
    for (int i = 0; i < x; i++)
    {
        cin>>y;
        q.push(y);
    }
    /*for (int i = 0; i < x; i++)
    {
        cout << q.peek() << " ";
        q.pop();
    }*/
    q.empty();
    cout<<"You entered"<<endl;
    q.display();
    return 0;
}