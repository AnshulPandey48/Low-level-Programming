#include <bits/stdc++.h>
using namespace std;
class devil
{
    int *power;

public:
    devil(int p)
    {
        power = new int; // power will store the memory address new int is dynamic memory alocate
        *power = p;      // this will store value of p
    }

    // copy constructor
    devil(const devil &d)
    {
        power = new int;
        *power = *(d.power); // copy value , now address
        cout << "copy constructor called" << endl;
    }
    void show()
    {
        cout << "power:  " << *power << endl;
    }
};
int main()
{
    devil lucifer(666);
    lucifer.show();

    devil belial = lucifer;
    belial.show();
    return 0;
}