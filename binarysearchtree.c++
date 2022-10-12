//BST
#include <bits/stdc++.h>
using namespace std;
class Tree
{
public:
    int data;
    Tree *right;
    Tree *left;

    Tree* insert(Tree* root, int x)
    {
        if (root == NULL)
        {
            root = new Tree();
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
};
int main()
{
    int x,n;
    Tree* start=NULL;
    cout<<"Enter height/level of binary search tree"<<endl;
    cin>>n;
    n=pow(2,n)-1;
    cout<<"Enter values in Tree"<<endl;
    for(int i=0;i<n;i++){
    cin>>x;
    start=start->insert(start,x);
    }
    return 0;
}
