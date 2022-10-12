//BST
///***************CONSTRUCT BINARY SEARCH TREE USING GIVEN PREORDER**************** 
#include <bits/stdc++.h>
using namespace std;
class Tree
{
public:
    int data;
    Tree *right;
    Tree *left;

    Tree *insert(int pre[], int key, int min, int max, int *index, int size)
    {
        if (*index >= size)
            return NULL;

        Tree *root = NULL;

        if (key > min && key < max)
        {
            root = new Tree();
            root->data = key;
            root->left = root->right = NULL;
            *index = *index + 1;

            if (*index < size)

                root->left = insert(pre, pre[*index], min, key, index, size);

            if (*index < size)
                root->right = insert(pre, pre[*index], key, max, index, size);
        }
        return root;
    }
    void inorder(Tree *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
};
int main()
{
    int n, pre[] = {10, 5, 1, 7, 40, 50}, index = 0;
    n = sizeof(pre) / sizeof(pre[0]);
    Tree *start = NULL;
    int x = pre[index];
    start = start->insert(pre, x, INT_MIN, INT_MAX, &index, n);
    start->inorder(start);
    return 0;
}
