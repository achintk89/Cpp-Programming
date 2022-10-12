//*************** SUM OF ALL THE DATA IN Kth NODE **************

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

    int sumAtKnode(tree* root,int k){
        if(root==NULL){
            return 0;
        }
        queue<tree *> q;
        q.push(root);
        q.push(NULL);
        int level = 0;
        int sum = 0;

        while(q.empty()==false && level<=k){
            tree* node = q.front();
            q.pop();

            if(node!=NULL){
                if(level==k)
                   sum += node->data;
                if(node->left)
                   q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            else if(q.empty()==false){
                q.push(NULL);
                level++;
            }
        }
        return sum;
    }
};

int main(){
    int x,n;
    tree* start=NULL;
    cout<<"Enter the number of nodes "<<endl;
    cin>>n;
    cout<<"Enter values in Tree"<<endl;

    for(int i=0;i<n;i++){
    cin>>x;
    start=start->insert(start,x);
    }
    cout<<"Sum of Kth node is: ";
    cout<<start->sumAtKnode(start,2);
    return 0;
}