// classes and objects   class -> blueprint not allocated memory,  

#include <bits/stdc++.h>
using namespace std;
 inline int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 4, b = 10;
    int result = add(a, b);
    cout << result;
}