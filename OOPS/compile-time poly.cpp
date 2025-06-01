// same function but different parameters  or function overloading
#include <bits/stdc++.h>
using namespace std;
class operations
{
public:
    void add(int a, int b)
    {
        cout << a + b << endl;
    }

    void add(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
};
int main()
{
    operations a;
    a.add(2, 3);
    a.add(2, 3, 5);
    return 0;
}