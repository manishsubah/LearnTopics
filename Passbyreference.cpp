#include<iostream>
using namespace std;

void fun(int *ptr) {
    *ptr = 90;
}

int main() {
    int x = 45;
    fun(&x);
    cout<<"Value: "<<x;
    return 0;
}