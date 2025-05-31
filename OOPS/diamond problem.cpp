#include <bits/stdc++.h>
using namespace std;
class demon
{
public:
    void show()
    {
        cout << "hello " << endl;
    }
};
class lucifer : virtual public demon
{
public:
};
class belial : virtual public demon
{
public:
};
class child : public lucifer, belial
{
public:
};

int main()
{
    child l1;
    l1.show();
    return 0;
}