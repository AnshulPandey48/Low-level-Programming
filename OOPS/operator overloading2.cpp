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
        res = x + obj.x;
        res = y + obj.y;
        return res;
    }
};