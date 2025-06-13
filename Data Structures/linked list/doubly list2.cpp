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

node *deletefromlast(node *head)
{
    if (head == nullptr)
        return nullptr;
    node *curr = head;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    if (curr->prev != nullptr)
    {
        curr->prev->next = nullptr;
    }
    delete (curr);
    return head;
}

// delete from kth position

node *deleteatk(node *head, int k)
{
    if (head == nullptr)
        return nullptr;
    if (k == 1)
    {
        node *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        delete temp;
        return head;
    }
    node *curr = head;
    for (int i = 1; i < k && curr != nullptr; i++)
    {
        curr = curr -> next;
    }
    if(curr == nullptr){
        return head;
    }
    if(curr -> next != nullptr){
        curr -> next -> prev = curr -> next;
    }
    
}
int main()
{
}