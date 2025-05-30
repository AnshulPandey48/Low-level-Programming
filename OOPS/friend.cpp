#include <bits/stdc++.h>
using namespace std;
class demon
{
    int evil = 666;
    friend void show(demon d);
};

void show(demon d)
{
    cout << d.evil << endl;
}
int main()
{
    demon lucifer;
    show(lucifer);
    return 0;
}