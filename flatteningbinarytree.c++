// ************************* TO FLATTENING A BINARY TREE INTO A right skewed tree/linklist  ******************************

#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
      int data;
      tree* left;
      tree* right;

    tree(int x){
        data=x;
        left=NULL;
        right=NULL;
    }

    void flatten(tree* root){/////to flatten binary tree in right skewed tree or link list*********///////
        if(root==NULL || root->left==NULL&&root->right==NULL)
           return;
        
        if(root->left!=NULL){
            flatten(root->left);

            tree* temp =root->right;
            root->right = root->left;
            root->left = NULL;

            tree* t = root->right;
            while(t->right!=NULL){
                t=t->right;
            }
            t->right = temp;
        }
        flatten(root->right);
    }

    void inorder(tree* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};

int main(){
     tree* root;
    root = new tree(4);
    root->left = new tree(9);
    root->right = new tree(5);
    root->left->left = new tree(1);
    root->left->right = new tree(3);
    root->right->right = new tree(6);
    root->flatten(root);
    root->inorder(root);
    return 0;
}