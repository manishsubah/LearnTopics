#include<iostream>
using namespace std;

int main() {
    int var;
    int process = 0;

    var = process == 0 ? 25 : -25;
    cout<<"Value of var when process is 0: "<<var<<endl;
    process = 1;
    var = process == 0 ? 25 : -25;
    cout<<"Value of var when process is 1: "<<var;
    return 0;
}