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
// pre order traversal -> root , left , right
void preorder(struct node *head)
{
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << " ";
    preorder(head->left);
    preorder(head->right);
}

int main()
{
    struct node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    printPreorder(root);

    return 0;
}