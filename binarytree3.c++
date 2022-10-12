//**************** BUILD TREE FROM POSTORDER AND INORDER *****************

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

    int Search(int inorder[], int start, int end, int val){
        for(int i=start;i<=end;i++)   
          if(inorder[i]==val)
            return i;
        return -1;
    }

    tree* buildtree(int postorder[], int inorder[], int start,int end){
        static int idx=4;
        if(start>end){
            return NULL;
        }

        int val = postorder[idx];
        idx--;
        tree* curr = new tree(val);
        if(start==end){
            return curr;
        }
        int pos = Search(inorder,start,end,val);
        curr->right = buildtree(postorder,inorder,pos+1,end);
        curr->left = buildtree(postorder,inorder,start,pos-1);

        return curr;
    }

    void inorderprint(tree* root){
        if(root == NULL){
            return;
        }
        inorderprint(root->left);
        cout<<root->data<<" ";
        inorderprint(root->right);
    }
};

int main(){
    tree* start;
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};
    tree* root = root->buildtree(postorder,inorder,0,4);
    start->inorderprint(root);
    return 0;
}