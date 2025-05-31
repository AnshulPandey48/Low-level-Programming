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
        cout << "students  : " << name << endl;
    }
};

class classrooms
{
public:
    vector<student *> students;
    void addstudents(student *s)
    {
        students.push_back(s);
    }
    void showall(){
        for(auto s : students){
            s -> show();
        }
    }
};
int main()
{
}