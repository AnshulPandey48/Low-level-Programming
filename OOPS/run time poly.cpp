// must be inherited class, same fun , same parameters
#include <bits/stdc++.h>
using namespace std;
class demon
{
public:
    virtual void display()
    {
        cout << "demons here are\n";
    }
};

class lucifer : public demon
{
public:
    void display() override
    {
        cout << "lucifer here now\n";
    }
};
int main()
{
    // demon d;

    demon *d;
    lucifer l;
    d = &l;
    d->display();
    return 0;
}