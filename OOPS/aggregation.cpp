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
    void display()
    {
        cout << "students : " << name << endl;
    }
};

class classroom
{
public:
    vector<student *> students; // pointer storing vector
    void addstudent(student *s)
    {
        students.push_back(s);
    }
    void showall()
    {
        for (auto s : students)
        {
            s->display();
        }
    }
};
int main()
{
    student s1("lucifer");
    student s2("belial");
    classroom c;
    c.addstudent(&s1);
    c.addstudent(&s2);
    c.showall();
    return 0;
}