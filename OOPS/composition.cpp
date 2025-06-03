// you are born with me you will die with me
#include <bits/stdc++.h>
using namespace std;

// human , heart  human mara heart marjayega , heart mara human marjayega 
class heart
{
public:
    heart()
    {
        cout << "heart created " << endl;
    }
    ~heart()
    {
        cout << "heart destroyed" << endl;
    }
};
class human
{
public:
    heart h;
    human()
    {
        cout << "human created" << endl;
    }
    ~human()
    {
        cout << "human deleted" << endl;
    }
};
int main()
{
    human h1;
}