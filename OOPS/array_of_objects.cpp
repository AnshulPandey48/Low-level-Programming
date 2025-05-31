#include <bits/stdc++.h>
using namespace std;
class employee
{
    int id;
    char name[30];

public:
    void getdata();
    void putdata();
};
void employee ::getdata()
{
    cout << "Enter the id : " << endl;
    cin >> id;
    cout << "Enter the name : " << endl;
    cin >> name;
}
void employee::putdata()
{
    cout << "id : " << id << " name : " << name << endl;
}
int main()
{
    int n;
    cout << "enter the number of employes: ";
    cin >> n;
    employee emp[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of employee " << i + 1 << endl;
        emp[i].getdata();
    }
    cout << "\nShowing all employee details:\n";
    for (int i = 0; i < n; i++)
    {
        emp[i].putdata(); // Output for each employee
    }
    delete[] emp;
}