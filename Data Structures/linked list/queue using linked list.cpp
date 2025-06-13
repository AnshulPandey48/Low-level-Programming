#include <iostream>
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
node *front = nullptr, *rear = nullptr;
node *enqueue(int x)
{

    node *temp = new node(x);
    if (rear == nullptr)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}
int dequeue()
{
    if (front == nullptr)
        return -1;
    int val = front->data;
    node *temp = front;
    front = front->next;
    if (front == nullptr)
        rear = nullptr;
    delete temp;
    return val;
}
