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
    if (front == -1)
}