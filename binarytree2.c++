//************************* LEVEL ORDER TRAVERSAL ************************

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

    void printlevelorder(tree* root){
        if(root==NULL){
            return;
        }
        queue<tree *> q;
        q.push(root);
        while(q.empty()==false){
            tree *node = q.front();
            cout<<node->data<<" ";
            q.pop();

            if(node->left!=NULL)
                q.push(node->left);
            
            if(node->right!=NULL)
               q.push(node->right); 
        }
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
    start->printlevelorder(start);
    return 0;
}