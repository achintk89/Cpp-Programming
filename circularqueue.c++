//********************* CIRCULAR QUEUE **********************

#include <iostream>
using namespace std;
#define n 5

class Queue
{
    int *arr;
    int front;
    int rear;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void enqueue(int x)
    {
        if ((front == 0 && rear == n - 1) || (front == rear + 1))
        {
            cout << "Queue is overflow" << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = x;
        }
        else if (rear == n - 1)
        {
            rear = 0;
            arr[rear] = x;
        }
        else
        {
            rear++;
            arr[rear] = x;
        }
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is underflow" << endl;
            return;
        }
        if (front == rear)
        {
            rear = front = -1;
        }
        else if (front == n - 1)
        {
            front = 0;
        }
        else
            front++;
    }

    int peep()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void display()
    {
        while(front!=rear){
        cout<<arr[front]<<" ";
        if (front == n-1)
            front=0;
        else
            front=front+1;
        }
        cout<<arr[front]<<endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout<<q.peep()<<endl;
    q.dequeue();
    cout<<q.peep()<<endl;
    q.dequeue();
    cout<<q.peep()<<endl;
    q.enqueue(6);
    q.enqueue(7);
    q.display();
    return 0;
}