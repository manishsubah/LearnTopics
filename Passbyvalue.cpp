#include<iostream>
using namespace std;

void fun(int x) {
    x = 50;
}

int main() {
    int x = 45;
    fun(x);
    cout<<"Value: "<<x;
    return 0;
}