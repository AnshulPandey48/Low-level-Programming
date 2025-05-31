#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    student(string n)
    {
        name = n;
    }
};
class classroom
{
    vector<student*> students; // aggregation via pointer
};
int main()
{
}