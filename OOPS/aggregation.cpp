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
        cout << "students : " << name << endl;
    }
};
class classroom
{
    vector<student *> students;
    void addstudents(student *s) // So students is a vector of pointers to Student objects.
    {
        students.push_back(s);
    }
    void showstudent()
    {
        for (auto s : students)
        {
            s->show();
        }
    }
};
int main()
{
    student s1("lucifer");
    student s2("belial");
    classroom c;

}