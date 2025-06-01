#include <bits/stdc++.h>
using namespace std;
class vectoradd
{
public:
    float x, y;
    vectoradd operator+(const vectoradd &obj)
    {
        vectoradd res;
        res.x = x + obj.x;
        res.y = y + obj.y;
        return res;
    }
};
int main(){
    
}