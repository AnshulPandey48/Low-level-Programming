#include <iostream>
using namespace std;
class devil
{
    int power = 666;
    friend void show(devil d);
};

void show(devil d)
{
    cout << d.power << endl;
}
int main()
{
    devil lucifer;
    show(lucifer);
    return 0;
}