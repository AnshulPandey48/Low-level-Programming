#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{ // Implicitly inline
    return a + b;
}

int main()
{
    int x, y;
    cout << "enter: ";
    cin >> x;
    cout << "enter: ";
    cin >> y;

    int result = add(x, y);
    cout << result << endl;
}