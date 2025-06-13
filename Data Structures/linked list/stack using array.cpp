#include <bits/stdc++.h>
using namespace std;
#define max 100;
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