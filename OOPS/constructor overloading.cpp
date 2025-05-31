#include <bits/stdc++.h>
using namespace std;
class demon
{
    int power = 666;
    int result = 0;
    int inputval = 0;

public:
    // default constructor
    demon()
    {
    }
    // parameterized constructor
    demon(int p)
    {
        inputval = p;
        result = power + inputval;

    }
    demon(demon &p)
    {
        inputval = p.inputval;
        result = p.power + inputval;
    }
    void show()
    {
        cout << "loda " << result << endl;
    }
};
int main()
{
    demon lucifer;
    demon belial(1);
    demon venom = belial;
    lucifer.show();
    belial.show();
    venom.show();
}