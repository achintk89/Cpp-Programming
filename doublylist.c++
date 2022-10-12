//*************** DOUBLE LINKED LIST ******************

#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    void createlist(node **start, int x)
    {
        if (x == 0 || x < 0)
        {
            cout << "invalid value" << endl;
            return;
        }
        node *ptr, *p;
        ptr = (node *)malloc(sizeof(node));
        *start = ptr;
        ptr->prev = NULL;
        cout << "enter the values" << endl;
        for (int i = 1; i < x; i++)
        {
            cin >> ptr->data;
            ptr->next = (node *)malloc(sizeof(node));
            p = ptr;
            ptr = ptr->next;
            ptr->prev = p;
        }
        cin >> ptr->data;
        ptr->next = NULL;
    }

    void insertathead(node **start, int key)
    { // AT BEGINNING
        node *ptr;
        ptr = (node *)malloc(sizeof(node));

        if (*start == NULL)
        {
            ptr->data = key;
            ptr->prev = NULL;
            ptr->next = NULL;
            *start = ptr;
        }
        if (ptr != NULL)
        {
            ptr->data = key;
            ptr->prev = NULL;
            ptr->next = *start;
            *start = ptr;
        }
        else
            cout << "memory unavilable" << endl;
    }

    void insert(node **start, int key, int pos)
    { //AT ANY POSITION
        node *ptr, *p;
        p = *start;
        ptr = (node *)malloc(sizeof(node));
        int count = 0;
        while (p != NULL)
        {
            count++;
            p = p->next;
        }

        p = *start;
        if (*start == NULL && pos > count + 1)
        {
            cout << "not possible";
        }
        if (ptr != NULL)
        {
            ptr->data = key;
            for (int i = 1; i < pos - 1; i++)
            {
                p = p->next;
            }
            ptr->next = p->next;
            ptr->prev = p;
            p->next->prev=ptr;
            p->next=ptr;
        }
        else
            cout<<"No memory";
    }

    void insertattail(node **start, int key)
    { // AT END
        node *ptr, *p;
        ptr = (node *)malloc(sizeof(node));
        p = *start;

        if (*start == NULL)
        {
            ptr->data = key;
            ptr->prev = NULL;
            ptr->next = NULL;
            *start = ptr;
        }
        if (ptr != NULL)
        {
            while (p->next != NULL)
            {
                p = p->next;
            }
            ptr->data = key;
            ptr->next = NULL;
            ptr->prev = p;
            p->next = ptr;
        }
        else
            cout << "memory unavilable" << endl;
    }

    void show(node *ptr)
    {
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main()
{
    int x;
    cout << "enter the size of list" << endl;
    cin >> x;
    node *start = NULL;
    start->createlist(&start, x);
    start->show(start);
    start->insert(&start,8,3);
    start->show(start);
        /* start->insertathead(&start,17);
    start->show(start);
    start->insertattail(&start,14);
    start->show(start);*/
        return 0;
}