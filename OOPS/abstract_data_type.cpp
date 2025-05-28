#include <iostream>
#include <vector>

class Stack
{
private:
    std::vector<int> data; // Hidden data storage

public:
    void push(int value)
    {
        data.push_back(value);
    }

    int pop()
    {
        if (isEmpty())
        {
            std::cout << "Stack is empty" << std::endl;
            return -1;
        }
        int top = data.back();
        data.pop_back();
        return top;
    }

    bool isEmpty()
    {
        return data.empty();
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    std::cout << s.pop() << std::endl; // Output: 20
    std::cout << s.pop() << std::endl; // Output: 10
    return 0;
}