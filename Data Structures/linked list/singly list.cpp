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
// insert at the begining
node *insertathead(node *head, int val)
{
    if (head == nullptr)
        return;
    node *newnode = new node(4);
    newnode->next = head;
    return newnode;
}
// insert at a custom position
node*insertatpos(node*head,int key ,int val){
    node*curr = head;
    
}
int main()
{
}