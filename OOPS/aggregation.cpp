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
    vector<student*> students; // pointer storing vector
    void addstudent(student*s){
    
    }
};
int main()
{
}