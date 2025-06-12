#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next, *prev;
    node(int x)
    {
        data = x;
        next = prev = nullptr;
    }
};

node *deletFront(node *head)
{
    if (head == nullptr)
        return nullptr;
    node *temp = head;
    head = head->next;
    if (head != nullptr)
    {
        head->prev = nullptr;
    }
    delete (temp);
    return head;
}
// delete from endd

node*deletefromlast(node*head){
    
}
int main()
{
}