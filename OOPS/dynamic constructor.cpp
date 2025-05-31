#include <bits/stdc++.h>
using namespace std;
class demon
{
    int *power;

public:
    demon(int p)
    {
        power = new int; // dynamically memory
        *power = p;  // assigning value
        //cout << *power << endl;
    }
    void show(){
        cout << *power << endl;
    }
};
int main()
{
    demon lucifer(666);
    lucifer.show();
    return 0;
}