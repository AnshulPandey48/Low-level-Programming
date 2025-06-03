#include <iostream>
using namespace std;

class MyComplex {
public:
    int real, imag;
    MyComplex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }

    MyComplex operator-(const MyComplex &obj) const {
        MyComplex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    MyComplex c1(2, 3);
    MyComplex c2(3, 4);
    MyComplex c3 = c1 - c2;
    c3.display();
}
