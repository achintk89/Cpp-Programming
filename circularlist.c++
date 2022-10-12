//***************** INSERTING IN CIRCULAR LINKED LIST *****************

#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    void createlist(node **start, int x)
    {
        if (x == 0 || x < 0)
        {
            cout << "invalid values" << endl;
            return;
        }
        node *ptr = (node *)malloc(sizeof(node));
        *start = ptr;
        cout << "enter the values" << endl;
        for (int i = 1; i < x; i++)
        {
            cin >> ptr->data;
            ptr->next = (node *)malloc(sizeof(node));
            ptr = ptr->next;
        }
        cin >> ptr->data;
        ptr->next = *start;
    }

    void insertAtHead(node **start, int key)
    {
        node *ptr, *temp;

        ptr = (node *)malloc(sizeof(node));
        if (*start == NULL)
        {
            ptr->data = key;
            ptr->next = *start;
            *start = ptr;
        }

        else if (ptr != NULL)
        {
            ptr->data = key;
            temp = *start;
            while (temp->next != *start)
            {
                temp = temp->next;
            }
            ptr->next = *start;
            *start = ptr;
            temp->next = *start;
        }
        else
            cout << "Memory unavilable" << endl;
    }

    void insert(node **start, int key, int pos)
    {
        node *ptr, *temp;
        temp = *start;
        ptr = (node *)malloc(sizeof(node));
        int count = 0;
        while (temp->next!= *start)
        {
            count++;
            temp = temp->next;
        }
        if (pos >count + 1)
        {
            cout << "Position unavilable" << endl;
            return;
        }
        else
        {
            if (ptr != NULL)
            {
                if (*start == NULL)
                {
                    ptr->data = key;
                    ptr->next = *start;
                    *start = ptr;
                }

                else
                {
                    ptr->data = key;
                    temp = *start;
                    for (int i = 1; i < pos - 1; i++)
                    {
                        temp = temp->next;
                    }
                    ptr->next = temp->next;
                    temp->next = ptr;
                }
            }
            else
                cout << "Memory unavilable" << endl;
        }
    }

    void insertAtTail(node **start, int key)
    {
        node *ptr, *temp;
        ptr = (node *)malloc(sizeof(node));
        if (*start == NULL)
        {
            ptr->data = key;
            ptr->next = *start;
            *start = ptr;
        }

        else if (ptr != NULL)
        {
            ptr->data = key;
            temp = *start;
            while (temp->next != *start)
            {
                temp = temp->next;
            }
            ptr->next = *start;
            temp->next = ptr;
        }
        else
            cout << "memory unavilable" << endl;
    }

    void show(node *start)
    {
        node *ptr = start;
        do
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while (ptr != start);
        cout << endl;
    }
};

int main()
{
    int x;
    cout << "Enter the size of list" << endl;
    cin >> x;
    node *start = NULL;
    start->createlist(&start, x);
    start->show(start);
    start->insertAtHead(&start, 17);
    start->show(start);
    start->insertAtTail(&start, 14);
    start->show(start);
    start->insert(&start, 23, 3);
    start->show(start);
    return 0;
}