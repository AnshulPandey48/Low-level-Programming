#include <bits/stdc++.h>
using namespace std;
// pure virutal has no implementation in base class
class demon
{
public:
    virtual void haunt() = 0; // syntax of pure virutal function
};
class lucifer : public demon
{
public:
    void haunt() override
    {
        cout << "lucifer is here man " << endl;
    }
};
int main()
{
    // demon d -> gurantee error
    demon *d;
    lucifer l;
    d = &l;
    d->haunt();
    return 0;
}