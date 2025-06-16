#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> sp = make_shared<int>(42);
    weak_ptr<int> wp = sp;

    cout << "Use count before reset: " << sp.use_count() << endl;

    sp.reset(); // releases shared_ptr

    if (wp.expired()) {
        cout << "Memory is deleted. weak_ptr expired." << endl;
    } else {
        cout << "Still accessible." << endl;
    }

    return 0;
}
