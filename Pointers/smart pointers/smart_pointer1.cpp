#include <iostream>
#include <memory>
using namespace std;
int main()
{
    unique_ptr<int> ptr = make_unique<int>(10);
}