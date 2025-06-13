#include <iostream>
using namespace std;

#define MAX 1000

class TwoStacks {
    int arr[MAX];
    int top1, top2;

public:
    TwoStacks() {
        top1 = -1;
        top2 = MAX;
    }

    // Push in stack 1
    void push1(int x) {
        if (top1 < top2 - 1) {
            arr[++top1] = x;
        } else {
            cout << "Stack Overflow\n";
        }
    }

    // Push in stack 2
    void push2(int x) {
        if (top1 < top2 - 1) {
            arr[--top2] = x;
        } else {
            cout << "Stack Overflow\n";
        }
    }

    // Pop from stack 1
    int pop1() {
        if (top1 >= 0)
            return arr[top1--];
        else {
            cout << "Stack Underflow\n";
            return -1;
        }
    }

    // Pop from stack 2
    int pop2() {
        if (top2 < MAX)
            return arr[top2++];
        else {
            cout << "Stack Underflow\n";
            return -1;
        }
    }
};

// Main function
int main() {
    TwoStacks ts;

    ts.push1(10);
    ts.push1(20);
    ts.push2(100);
    ts.push2(200);

    cout << "Popped from Stack 1: " << ts.pop1() << endl;
    cout << "Popped from Stack 2: " << ts.pop2() << endl;

    return 0;
}
