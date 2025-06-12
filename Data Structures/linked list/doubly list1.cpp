#include <bits/stdc++.h>
using namespace std;
struct node
{
    node *next;
    node *prev;
    int data;
    node(int x)
    {
        data = x;
        next = prev = nullptr;
    }
};

// insertion at front
node *insertatfirst(node *head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    if (head != nullptr)
    {
        head->prev = newnode;
    }
}
// insert at the end
node *insertatend(node *head, int val)
{
    node *newnode = new node(val);
    if (head == nullptr)
        head = newnode;
    else
    {

        node *curr = head;
        while (curr != nullptr)
        {
            curr = curr->next;
        }
        curr -> next = newnode;
        newnode -> prev = curr;
    }
}

int main()
{
}