//************************* TO FIND THE SHORTEST DISTANCE IN BINARY TREE BETWEEN TWO NODES *******************************

#include<bits/stdc++.h>
using namespace std;

struct tree{
    int data;
    tree* left;
    tree* right;

    tree(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

tree* LCA(tree* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }                                              
    if(root->data==n1 || root->data==n2){
        return root;
    }
    tree* left = LCA(root->left,n1,n2);
    tree* right = LCA(root->right,n1,n2);

    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left==NULL && right==NULL){
        return NULL;
    }
    if(left!=NULL){
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
}

int findDistance(tree* root,int k,int dist){
     if(root==NULL){
         return -1;
     }
     if(root->data==k){
         return dist;
     }
     int left = findDistance(root->left,k,dist+1);
     if(left!=-1)
        return left;
     return findDistance(root->right,k,dist+1);
}

int distance(tree* root,int n1,int n2){
    tree* lca = LCA(root,n1,n2);
    int d1 = findDistance(lca,n1,0);
    int d2 = findDistance(lca,n2,0);

    return d1+d2;
}

int main(){
    tree* root;
    root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->right->right = new tree(5);

    cout<<distance(root,4,5)<<endl;
    return 0;
}