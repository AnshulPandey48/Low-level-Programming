#include <bits/stdc++.h>
using namespace std;

class demon {
    int value = 100;
    int result;

public:
    // Constructor
    demon(int x) {
        result = value * x;
    }

    // Copy Constructor
    demon(const demon &x) {
        cout << "copy constructor called: " << endl;
        value = x.value;
        result = x.result;  // Copy the result as well
    }

    void show() {
        cout << "Result: " << result << endl;
    }
};

int main() {
    demon lucifer(100);  // result = 100 * 100 = 10000
    lucifer.show();

    demon belial = lucifer;  // Copy constructor is called here
    belial.show();           // should print same result

    return 0;
}
