#include <bits/stdc++.h>
using namespace std;
class abc
{
public:
    void show(){
        cout << "hello " << endl;
    }
};
void abc ::show()
{
    cout << "hello bhosad" << endl;
}
int x = 10; // global
int main()
{
    int x = 20;
    cout << "local : " << x << endl;
    cout << "global : " << ::x << endl;
    abc a1;
    a1.show();
    return 0;
}