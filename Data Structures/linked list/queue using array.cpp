#include <iostream>
using namespace std;
#define max 100
int queue[max];
int front = -1, rear = -1;

int  enqueue(int x)
{
    if (rear == max - 1)
    {
        cout << "queue overflow\n";
        return;
    }
    if (front == -1)
        front = 0;
    return queue[++rear] = x;
}