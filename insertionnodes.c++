//***************** TO FIND THE INTERSECTION POINT OF TWO LINKED LIST *******************

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

     int length(node **start){
         int l=0;
         node *ptr = *start;
         while(ptr!=NULL){
             l++;
             ptr = ptr->next;
         }
         return l;
     }

     int intersection(node **start1,node **start2){
         node *ptr1,*ptr2;
         int l1 = length(start1);
         int l2 = length(start2);

         int d=0;
         if(l1>l2){
             d=l1-l2;
             ptr1=*start1;
             ptr2=*start2;
         }
         else{
             d=l2-l1;
             ptr1=*start2;
             ptr2=*start1;
         }
         while(d){
             ptr1 = ptr1->next;
             if(ptr1==NULL){
                 return -1;
             }
             d--;
         }
         while(ptr1!=NULL && ptr2!=NULL){
             if(ptr1->data==ptr2->data){
                 cout<<"Insertion is :";
                 return ptr1->data;
             }
             ptr1 = ptr1->next;
             ptr2 = ptr2->next;
         }
         return -1;
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
    node *start = NULL;
    node *start1 = NULL;
    node *start2 = NULL;
    start1->createlist(&start1,x);
    start1->show(start1);
    start2->createlist(&start2,y);
    start2->show(start2);
    cout<<start->intersection(&start1,&start2);
    return 0;
}