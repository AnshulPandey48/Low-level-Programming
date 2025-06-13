#include <iostream>
using namespace std;
#define max 100
int queue[max];
int front = -1, rear = -1;

void enqueue(int x)
{
    if (rear == max - 1)
    {
        cout << "queue overflow\n";
        return -1;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = x;
}
int dequeue(){
    if(front == -1 || front > rear){
        cout << "overflow\n";
        return -1;
    }
    return queue[front++];
}