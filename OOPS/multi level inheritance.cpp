#include <bits/stdc++.h>
using namespace std;
class demon
{
public:
    void display()
    {
        cout << "1st parent here : " << endl;
    }
};

class lucifer : public demon
{
public:
    void show()
    {
        cout << "2nd parent here " << endl;
    }
};

class belial : public lucifer
{
public:
    void power()
    {
        cout << "3rd here " << endl;
    }
};
int main()
{
    belial b;
    b.show();
    b.display();
    b.power();
    return 0;
}