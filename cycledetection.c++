//**************** BASED ON FLOYD'S ALGORITHM ****************

#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
   public:
     int data;
     node* next;

     void createlist(node **start,int x){
         if(x==0 || x<0){
             cout<<"invalid value"<<endl;
             return;
         }
         node *ptr;
         ptr = (node*)malloc(sizeof(node));
         *start = ptr;
         cout<<"Enter the values"<<endl;
         for(int i=1;i<x;i++){
             cin>>ptr->data;
             ptr->next = (node*)malloc(sizeof(node));
             ptr = ptr->next; 
         }
         cin>>ptr->data;
         ptr->next = NULL;
     }

     void makecycle(node **start,int pos){
         node *temp = *start;
         node *startnode;

         int count = 1;
         while(temp->next != NULL){
             if(count == pos){
                 startnode = temp;
             }
             temp = temp->next;
             count++;
         }
         temp->next = startnode;
     }

     bool detectcycle(node **start){
         node *fast = *start;
         node *slow = *start;
         while(fast!=NULL && fast->next!=NULL){
             slow = slow->next;
             fast = fast->next->next;
             if(fast == slow){
                 return true;
             }
         }
         return false;
         cout<<endl;
     }

    void removecycle(node **start){
         node *fast = *start;
         node *slow = *start;
        /* while(slow!=fast){
             slow = slow->next;
             fast = fast->next->next;
            }  */
            do{
                slow = slow->next;
                fast = fast->next->next;
            }while(slow!=fast);
            
            fast = *start;
            while(slow->next != fast->next){
               slow = slow->next;
               fast = fast->next;
            }
            slow->next = NULL;
            cout<<endl;
    }

      void show(node *ptr){
          while(ptr!=NULL){
              cout<<ptr->data<<" ";
              ptr = ptr->next;
          }
          cout<<endl;
      }
};

int main(){
    int x;
    cout<<"Enter the size of list"<<endl;
    cin>>x;
    node *start = NULL;
    start->createlist(&start,x);
    start->show(start);
    start->makecycle(&start,3);
    cout<<start->detectcycle(&start);
    start->removecycle(&start);
    cout<<start->detectcycle(&start)<<endl;
    start->show(start);
    return 0;
}