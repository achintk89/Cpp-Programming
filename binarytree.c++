///Binary Tree
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
        data=val;
        left=NULL;
        right=NULL;
    }
};
int main()
{
    int x, n;
    Tree *start = NULL;
    start=new Tree(5);
    start->left=new Tree(4);
    start->right=new Tree(3);
    start->left->left=new Tree(2);
    start->left->right=new Tree(1);

    cout << start->data << endl;
    cout << start->left->data << endl;
    cout << start->right->data << endl;
    cout << start->left->left->data << endl;
    cout << start->left->right->data << endl;
    return 0;
}
