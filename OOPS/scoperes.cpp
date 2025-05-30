#include<bits/stdc++.h>
using namespace std;
int x = 10; // global 
int main(){
int x = 20;
cout << "local : " << x << endl;
cout << "global : " << ::x << endl;
return 0;
}