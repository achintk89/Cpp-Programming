//******************** FLATTENING LINKED LIST **************************

#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;
    node *bottom = NULL;

    void createlist(node **start, int x)
    {
        if (x == 0 || x < 0)
        {
            cout << "Invalid values" << endl;
            return;
        }
        node *ptr;
        ptr = (node *)malloc(sizeof(node));
        *start = ptr;
        cout << "enter the values" << endl;
        for (int i = 1; i < x; i++)
        {
            cin >> ptr->data;
            ptr->next = (node *)malloc(sizeof(node));
            ptr = ptr->next;
        }
        cin >> ptr->data;
        ptr->next = NULL;
    }

    node *bottomlist(node **b, int x)
    {
        node *ptr = (node *)malloc(sizeof(node));
        (*b)->bottom = ptr;
        cout << "enter the values in bottom list" << endl;
        for (int i = 1; i < x; i++)
        {
            cin >> ptr->data;
            ptr->bottom = (node *)malloc(sizeof(node));
            ptr = ptr->bottom;
        }
        cin >> ptr->data;
        ptr->bottom = NULL;
        return (*b)->next;
    }

    node *merge(node *x, node *y)
    {
        node *z, *temp;
        temp = (node *)malloc(sizeof(node));
        temp->data = -1;
        z = temp;

        while (x != NULL && y != NULL)
        {
            if (x->data < y->data)
            {
                z->bottom = x;
                z = z->bottom;
                x = x->bottom;
            }
            else
            {
                z->bottom = y;
                z = z->bottom;
                y = y->bottom;
            }
        }
        if (x != NULL)
            z->bottom = x;
        else
            z->bottom = y;
        return temp->bottom;
    }
    node *flatten(node *root)
    {
        if (root == NULL || root->next == NULL)
            return root;
        root->next = flatten(root->next);
        root = merge(root, root->next);
        return root;
    }

    void show(node *ptr)
    {
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->bottom;
        }
        cout << endl;
    }
};

int main()
{
    int x, y, i=1;
    cout << "Enter the size list" << endl;
    cin >> x;
    node *start = NULL, *ptr;
    start->createlist(&start, x);
    ptr = start;
    while (ptr != NULL)
    {
        cout << "Enter size of bottom node" << i<<": ";
        cin >> y;
        ptr = start->bottomlist(&ptr, y);
        i++;
    }
    ptr = start->flatten(start);
    start->show(ptr);

    return 0;
}