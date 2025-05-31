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
    vector<student *> students; // pointer to a student object
    public:
    void addstudents(student*s){
        students.push_back(s);
    }
};
int main()
{
}