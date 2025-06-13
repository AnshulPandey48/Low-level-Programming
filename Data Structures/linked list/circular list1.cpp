#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
node *insertatemptylist(node *last, int val)
{
    if (last != nullptr)
        return last;
    node *newnode = new node(val);
    newnode->next = newnode;
    last = newnode;
    return last;
}
// insert at begining of the circular list
node *insertatbegining(node *last, int val)
{
    node *newnode = new node(val);

    if (last == nullptr)
    {
        newnode->next = newnode;
        last = newnode;
    }
    return last;
}

node *insertatend(node *tail, int val)
{
    node *newnode = new node(val);
    if (tail == nullptr)
    {
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
    return tail;
}
int main()
{
}