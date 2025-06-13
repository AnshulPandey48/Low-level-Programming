#include <iostream>
using namespace std;
#define max 100
int stack[max];
int top = -1;

int push(int x)
{
    if (top == max - 1)
    {
        cout << "stack overflow\n";
        return -1;
    }
    stack[++top] = x;
}

int pop()
{
    if (top == -1)
    {
        cout << "stack underflow\n";
        return -1;
    }
    return stack[top--];
}
int peek()
{
    if (top == -1)
    {
        return -1;
    }
    return stack[top];
}

bool isempty()
{
    return top == -1;
}