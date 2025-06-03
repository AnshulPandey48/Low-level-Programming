#include <bits/stdc++.h>
using namespace std;
class demon
{
    int power = 666;
    int result = 0;
    int limit;

public:
    demon(int x) // constructor 
    {
        limit = x;
        for (int i = 0; i < limit; i++)
        {
            result = power + i;
        }
    }
    // copy constructor here 
    demon(demon &x)
    {
        for (int i = 0; i < x.limit; i++)
        {
            result = power + i;
        }
    }
    void show()
    {
        cout << result << endl;
    }
};
int main()
{
    int x = 5;
    demon lucifer(x); // object
    lucifer.show();
    demon belial = lucifer;  // copy cosntructor
    belial.show();
}