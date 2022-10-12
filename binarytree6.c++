///Binary Tree Height and diameter **************
#include <iostream>
using namespace std;
class Tree
{
public:
    int data;
    Tree *right;
    Tree *left;
    Tree(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    int calheight(Tree *root)
    {
        if (root == NULL)
            return 0;
        return max(calheight(root->left), calheight(root->right))+1;
    }

    int caldiameter(Tree* root){
        if(root==NULL){
            return 0;
        }
        int lheight = calheight(root->left);
        int rheight = calheight(root->right);
        int currDiameter = lheight + rheight + 1;

        int ldiameter= caldiameter(root->left);
        int rdiameter= caldiameter(root->right);

        return max(currDiameter,max(ldiameter,rdiameter));
    }
};
int main()
{
    int x, n;
    Tree *start = NULL;
    start = new Tree(5);
    start->left = new Tree(4);
    start->left->left = new Tree(2);
    start->left->right = new Tree(1);
    cout<<"Height: "<<start->calheight(start)-1<<endl;
    cout<<"DIAMETER: "<<start->caldiameter(start);
    return 0;
}
