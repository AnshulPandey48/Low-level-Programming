#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int v)
    {
        data = v;
        left = right = nullptr;
    }
};

void inroder(node *head)
{
    inroder(head->left);
    cout << head->data << " ";
    inroder(head->right);
}
int main()
{
}