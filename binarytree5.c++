//*************** COUNT NO. OF NODES IN TREE *****************

#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
      int data;
      tree* left;
      tree* right;

       tree* insert(tree* root, int x)
    {
        if (root == NULL)
        {
            root = new tree();
            root->data = x;
            root->left=root->right=NULL;
        }
        else if(x <= root->data)
        {
            root->left = insert(root->left, x);
        }
        else root->right = insert(root->right, x);
        return root;
    }
    
    int countnode(tree* root){
        static int count=0;
        if(root == NULL){
            return 0;
        }
        count++;
        countnode(root->left);
        countnode(root->right);
        return count;
    }
};

int main(){
    int x,n;
    tree* start=NULL;
    cout<<"Enter height/level of binary search tree"<<endl;
    cin>>n;
    cout<<"Enter values in Tree"<<endl;
    for(int i=0;i<n;i++){
    cin>>x;
    start=start->insert(start,x);
    }
    cout<<"Total nodes: "<<start->countnode(start);
    return 0;
}