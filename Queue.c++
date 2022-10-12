//**************** QUEUE OPERATIONS ***************

#include<iostream>
using namespace std;
#define n 4

class queue{
   int* arr;
   int front;
   int back;

   public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x){
        if(back==n-1){
            cout<<"Queue is overflow"<<endl;
            return;
        }
        else if(back==-1){
            back = front = 0;
            arr[back]=x;
        }
        else{
            arr[back]=x;
            back++;
        }
    }

    void dequeue(){
        if(front==-1 || front>back){
            cout<<"Queue is underflow"<<endl;
            return;
        }
        front++;
    }

    int peep(){
        if(front==-1 || front>back){
            cout<<"No elements is present in Queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>back)
          return true;
        else
          return false;
    }
};

int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout<<q.peep()<<endl;
    q.dequeue();
    cout<<q.peep()<<endl;
    q.dequeue();
    cout<<q.peep()<<endl;
    q.dequeue();
    cout<<q.peep()<<endl;
    q.dequeue();

    cout<<q.empty()<<endl;

    return 0;
}