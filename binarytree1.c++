//*************** BUILD TREE FROM PREORDER AND INORDER *****************

#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
      int data;
      tree* left;
      tree* right;

      tree(int val)
      {
          data=val;
          left=NULL;
          right=NULL;
      }

    int Search(int inorder[], int start, int end, int curr){
        for(int i=start;i<=end;i++)
          if(inorder[i]==curr)
            return i;
        return -1;
    }
      
    tree* buildtree(int preorder[], int inorder[], int start,int end){
        static int idx=0;
        if(start>end){
            return NULL;
        }

        int curr = preorder[idx];
        idx++;
        tree* node = new tree(curr);
        if(start==end){
            return node;
        }
        int pos = Search(inorder,start,end,curr);
        node->left = buildtree(preorder,inorder,start,pos-1);
        node->right = buildtree(preorder,inorder,pos+1,end);

        return node;
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
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    tree* root = root->buildtree(preorder,inorder,0,4);
    start->inorderprint(root);
    return 0;
}