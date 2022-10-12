//************ REVERSING A LINKED LIST *************

#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
    public:
      int data;
      node* next;

      void createlist(node **start,int x){
          if(x==0 || x<0){
              cout<<"invalid number"<<endl;
              return;
          }
          node *ptr;
          ptr = (node*)malloc(sizeof(node));
          *start = ptr;
          cout<<"Enter the value"<<endl;
          for(int i=1;i<x;i++){
              cin>>ptr->data;
              ptr->next = (node*)malloc(sizeof(node));
              ptr = ptr->next;
          }
          cin>>ptr->data;
          ptr->next = NULL;
      }

      void reverse(node **start){//reverse the link list
          if(*start==NULL || (*start)->next==NULL){
             return;
          }
         node *prev = NULL;
         node *curr = *start;
         node *next = NULL;
         while(curr!=NULL){
             next = curr->next;
             curr->next = prev;
             prev = curr;
             curr = next;
         }
         *start = prev;
      }

      void Reverse(node *start){//print values in reverse
          if(start==NULL){
             return;
          }
          node *ptr;
          ptr = start;
          if(ptr!=NULL){
              Reverse(ptr->next);
              cout<<ptr->data<<" ";
          }
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
    node *start = NULL;
    cout<<"Enter the size of list"<<endl;
    cin>>x;
    start->createlist(&start,x);
    start->show(start);
    start->reverse(&start);
   /* start->Reverse(start);*/
    start->show(start);
    return 0;
}