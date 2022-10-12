//************ APPEND THE LINKED LIST WITH K POSITION ****************

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

    void append(node **start, int k)
    {
        node *ptr;
        ptr = *start;
        int l = 0;
        while (ptr != NULL)
        {
            l++;
            ptr = ptr->next;
        }
        if (k >= l-1)
        {
            cout << "cannot append"<<endl;
            return;
        }

        node *begin, *end;
        int count = 1;
        ptr = *start;
        while (ptr->next != NULL)
        {
            if (count == k)
                end = ptr;
            if (count == k + 1)
                begin = ptr;
            ptr = ptr->next;
            count++;
        }
        end->next = NULL;
        ptr->next = *start;
        *start = begin;
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
    cout << "Enter the size of list" << endl;
    cin >> x;
    node *start = NULL;
    start->createlist(&start, x);
    start->show(start);
    start->append(&start, 3);
    start->show(start);
    return 0;
}