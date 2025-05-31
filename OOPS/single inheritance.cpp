#include <bits/stdc++.h>
using namespace std;
class demon
{
public:
    void display()
    {
        cout << " single inheritance lode " << endl;
    }
};
class luci : public demon
{
public:
    void power()
    {
        cout << "success single inheritance " << endl;
    }
};
int main()
{
    luci l1;
    l1.display();
    l1.power();
    return 0;
}