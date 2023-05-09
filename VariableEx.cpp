#include<iostream>
using namespace std;

int var = 20; // global variable

int main() {
    int x = 10; // local variable

    cout<<"Global Variable: "<<var<<endl;
    cout<<"Local Variable: "<<x<<endl;
    return 0;
}