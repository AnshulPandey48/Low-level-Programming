#include <iostream>
#include <memory>
using namespace std;
int main()
{
    unique_ptr<int> ptr = make_unique<int>(10); // ptr is a variable
    cout << "value stored: " << *ptr;
    return 0;
}