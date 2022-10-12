//********************** TO REPLACE THE SUM IN EVERY NODES BY SUMMING THE CHILD NODE DATA INCLUDING THAT NODE TOO ********************

#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
     int data;
     tree* left;
     tree* right;

     tree* insert(tree* root,int x){
         if(root==NULL){
             root = new tree();
             root->data=x;
             root->left = root->right = NULL;
         }
         else if(x<=root->data){
             root->left = insert(root->left,x);
         }
         else{
             root->right = insert(root->right,x);
         }
        return root;
     }

     void sumReplace(tree* root){
         if(root==NULL){
             return;
         }
         sumReplace(root->left);
         sumReplace(root->right);

         if(root->left!=NULL){
             root->data += root->left->data;
         }
         if(root->right!=NULL){
             root->data += root->right->data;
         }
     }

     void preorder(tree* root){
          if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
     }
};

int main(){
    int x,n;
    tree* start = NULL;
    cout<<"Enter the nodes you want"<<endl;
    cin>>n;
    cout<<"Enter values in tree"<<endl;
    for(int i=0;i<n;i++){
      cin>>x;
      start = start->insert(start,x);
    }
    start->preorder(start);
    cout<<endl;
    start->sumReplace(start);
    start->preorder(start);
    cout<<endl;
    return 0;
}