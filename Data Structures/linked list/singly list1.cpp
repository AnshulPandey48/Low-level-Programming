#include <bits/stdc++.h>
using namespace std;
// all type of insertions are here
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = nullptr;
    }
};
// insert at the begining
node *insertathead(node *head, int val)
{
    if (head == nullptr)
        return;
    node *newnode = new node(val);
    newnode->next = head;
    return newnode;
}
// insert at a or after a custom node like insert after 54
node *insertaftersomeElement(node *head, int key, int val)
{
    node *curr = head;
    while (curr != nullptr)
    {
        if (curr->data == key)
            break;
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        return head;
    }
    node *newnode = new node(val);
    newnode->next = curr->next;
    curr->next = newnode;
    return head;
}

node *insertatend(node *head, int val)
{
    if (head == nullptr)
    {
        return;
    }
    node *curr = head;
    while (curr != nullptr)
    {
        curr = curr->next;
    }
    node *newnode = new node(val);
    curr->next = newnode;
    return head;
}
node *insertatend(node *tail, int val)
{
    node *newnode = new node(val);
    if (tail == nullptr)
    {
        tail = newnode;
    }
}
int main()
{
}