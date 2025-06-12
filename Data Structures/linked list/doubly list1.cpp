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
        curr->next = newnode;
        newnode->prev = curr;
    }
    return head;
}
// insert at k pos

node *insertatpos(node *head, int k, int val)
{
    node *newnode = new node(val);
    if (k == 1)
    {
        newnode->next = head;
        if (head != nullptr)
        {
            head->prev = newnode;
        }
    }
    node *curr = head;
    for (int i = 1; i < k - 1 && curr != nullptr; i++)
    {
        curr = curr->next;
    }
    if (curr == nullptr)
        return nullptr;
    newnode->prev = curr;
    curr->next = newnode;
    if (newnode->next != nullptr)
    {
        newnode->next->prev = newnode;
    }
    return head;
}
int main()
{
}