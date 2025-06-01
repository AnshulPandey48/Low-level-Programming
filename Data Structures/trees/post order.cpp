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
void postorder(node *head)
{
    postorder(head->left);
    postorder(head->right);
    cout << head->data << " ";
}
int main()
{
}