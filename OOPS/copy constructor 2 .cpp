#include<bits/stdc++.h>
using namespace std;
class demon{
    int value = 100;
    int result = 0;
    public:
    demon(int x){
        result = x + value;
    }
    // copy constructor
    demon(demon &x){
        result = demon.x + value;
    }
}
int main(){

}