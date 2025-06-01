#include <bits/stdc++.h>
using namespace std;
class demon
{
public:
    virtual void display()
    {
        cout << "demons are here " << endl;
    }
};
class lucifer : public demon
{
    void display() override
    {
        cout << "lucifer is here now " << endl;
    }
};
int main()
{
    demon *d;
    lucifer l;
    d = &l;
    d->display();
    return 0;
}