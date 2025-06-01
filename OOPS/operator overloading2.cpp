#include <bits/stdc++.h>
using namespace std;
class vectoradd
{
public:
    int x, y;
    vectoradd(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    vectoradd operator+(const vectoradd &obj)
    {
        vectoradd res;
        res.x = x + obj.x;
        res.y = y + obj.y;
        return res;
    }
    void display()
    {
        cout << x << " " << y;
    }
};
int main()
{
    vectoradd a(3, 4);
    vectoradd b(5, 4);
    vectoradd c;
    c = a + b;
    c.display();
    return 0;
}