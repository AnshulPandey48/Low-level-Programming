#include <iostream>
using namespace std;
#define MAX 1000

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = x;
}

void pop(int x){
    if(top == -1){
        cout << "stack underflow\n";
        return -1;
    }
    
}



int main() {

}
