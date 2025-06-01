#include <bits/stdc++.h>
using namespace std;
class complex
{
public:
    int real, imag;
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    // operator overloading
    complex operator+(complex const &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    complex c1(2,3);
    
}