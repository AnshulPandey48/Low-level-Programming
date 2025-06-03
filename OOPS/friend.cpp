#include <bits/stdc++.h>
using namespace std;
class demon
{
private:
    // kuch nai likha hai  mtlab private hai thik hai
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