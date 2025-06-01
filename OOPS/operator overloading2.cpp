#include <bits/stdc++.h>
using namespace std;
class mycomplex
{
    int real, imag;

public:
    mycomplex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    mycomplex operator-(const mycomplex &obj)
    {
        mycomplex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
    void display()
    {
        cout << real << " - " << imag << "i" << endl;
    }
};

int main()
{
    mycomplex m(2, 3);
    mycomplex n(3, 5);
    mycomplex l;
    l = m - n;
    l.display();
    return 0;
}