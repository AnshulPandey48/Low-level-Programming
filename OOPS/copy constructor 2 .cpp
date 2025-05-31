#include <bits/stdc++.h>
using namespace std;
class demon
{
    int value = 100;
    int result = 0;

public:
    demon(int x)
    {
        result = x + value;
    }
    // copy constructor
    demon(demon &x)
    {
        result = x.value + x.result;
    }
    void show()
    {
        cout << result << endl;
    }
};
int main()
{
    demon lucifer(100);
    lucifer.show();
    demon belial = lucifer;
    belial.show();
    return 0;
}