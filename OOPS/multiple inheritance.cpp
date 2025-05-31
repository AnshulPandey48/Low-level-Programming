#include <bits/stdc++.h>
using namespace std;
class demon
{
public:
    void display()
    {
        cout << "1st parent" << endl;
    }
};
class lucifer
{
    public:
    void show()
    {
        cout << "2nd parent class" << endl;
    }
};

class belial : public demon, public lucifer
{
    public:
    void power()
    {
        cout << "belial here" << endl;
    }
};
int main()
{
    belial b1;
    b1.display();
    b1.power();
    b1.show();
}