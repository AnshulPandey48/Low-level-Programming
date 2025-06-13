#include <bits/stdc++.h>
using namespace std;
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
node *top = nullptr;

void push(int x)
{
    node *newnode = new node(x);
    newnode->next = top;
    top = newnode;
}
int pop()
{
    if (top == nullptr)
    {
        cout << "underflow\n";
        return -1;
    }
    node *temp = top;
    int popedval = temp->data;
    top = top->next;
    delete temp;
    return popedval;
}
int peek()
{
    if (top == nullptr)
    {
        cout << "empty stack\n";
        return -1;
    }
    int peekedval = top->data;
    return peekedval;
}

bool isempty()
{
    return top == nullptr;
}