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
    vector<student *> students; // pointer to a student object
public:
    void addstudents(student *s)
    {
        students.push_back(s);
    }
    void showall()
    {
        for (auto s : students)
        {
            s->show();
        }
    }
};
int main()
{
    student s1("Lucifer");
    student s2("Belial");

    classroom c;
    c.addstudents(&s1);
    c.addstudents(&s2);

    c.showall();
}