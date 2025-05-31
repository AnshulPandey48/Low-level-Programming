#include<bits/stdc++.h>
using namespace std;
class demon{
    int value;
    public:
    demon(int x){
        int result = value * x;
    }
    void show(){
        cout << result << endl;
    }
    // copy constructor making here
    demon(demon &x){
        int result = value*x;
    }
}
int main(){

}