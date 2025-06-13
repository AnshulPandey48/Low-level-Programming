#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int x){
        data = x;
        next = nullptr;
    }
};
node*top = nullptr;

void push(int x){
    node*newnode = new node(x);
    newnode -> next = top;
    top = newnode;
}
