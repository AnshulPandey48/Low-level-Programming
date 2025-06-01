#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int v)
    {
        data = v;
        left = right = nullptr;
    }
};
void preorder(node *head)
{
    cout << head->data << " ";
    preorder(head->left);
    preorder(head->right);
}
int main()
{
    struct node *root = new node(1); // ✅ use 'node' not 'Node'
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(6);

    preorder(root); // ✅ correct function name

    return 0;
}