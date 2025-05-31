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
    void show()
    {
        cout << "student name : " << name << endl;
    }
};
class classroom
{
    vector<student *> students;
    

};
int main()
{
}