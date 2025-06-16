#include <iostream>
#include <memory>
using namespace std;
int main()
{
    shared_ptr<int> ptr = make_shared<int>(20);
    shared_ptr<int> p2 = ptr;
    shared_ptr<int> p3 = p2;
    cout << *p2 << endl;
    cout << ptr.use_count() << endl;
    return 0;
}