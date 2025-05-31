#include <bits/stdc++.h>
using namespace std;
class demon
{
    int value = 100;
    int result;

public:
    demon(int x)
    {
         result = value * x;
    }
    void show()
    {
        cout << result << endl;
    }
    // copy constructor making here
    demon(demon &x)
    {
        cout << "copy constructor : "<< endl;
        result = x.value;
    }
    void show(){
        cout << result;
    }
};
 int main()
{
demon lucifer(100);
lucifer.show();

demon belial = lucifer;
belial.show();
}