//******************** MERGE OF GIVEN TWO LINKED LIST **************************

#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
    public:
      int data;
      node* next;

      void createlist(node **start,int x){
          if(x==0 || x<0){
              cout<<"Invalid values"<<endl;
              return;
          }
          node *ptr;
          ptr = (node*)malloc(sizeof(node));
          *start = ptr;
          cout<<"enter the values"<<endl;
          for(int i=1;i<x;i++){
            cin>>ptr->data;
            ptr->next = (node*)malloc(sizeof(node));
            ptr = ptr->next;
         }
         cin>>ptr->data;
         ptr->next = NULL;
      }

    void merge(node *x,node *y,node **start){
          node *z;
          *start = (node*)malloc(sizeof(node));
          (*start)->data = -1;
          z=*start;

          while(x!=NULL && y!=NULL){
              if(x->data < y->data){
                  z->next = x;
                  x = x->next;
              }
              else{
                  z->next = y;
                  y = y->next;
              }
              z = z->next;
          }

          while(x!=NULL){
              z->next = x;
              x = x->next;
              z = z->next;
          }
          while(y!=NULL){
              z->next = y;
              y = y->next;
              z = z->next;
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
     int x,y;
    cout<<"Enter the size of 2 list"<<endl;
    cin>>x>>y;
    node *start;
    node *start1 = NULL;
    node *start2 = NULL;
    start1->createlist(&start1,x);
    start1->show(start1);
    start2->createlist(&start2,y);
    start2->show(start2);
    start1->merge(start1,start2,&start);
    start1->show(start->next);
    return 0;
}