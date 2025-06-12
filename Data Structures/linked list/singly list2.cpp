#include <bits/stdc++.h>
using namespace std;
// all deletion here
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
// deletion at the begining
node *deleteatbegining(node *head)
{
    if (head == nullptr)
        return nullptr;
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// deletion at the end
node *deleteatend(node *head)
{
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = nullptr;
    return head;
}

// deletion at the kth position

int main()
{
}