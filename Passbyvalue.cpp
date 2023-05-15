#include<iostream>
using namespace std;

void fun(int x) {
    x = 50;
    cout<<"Value: "<<x<<endl; //50
}

int main() {
    int x = 45;
    fun(x);
    cout<<"Value: "<<x<<endl; //45
    return 0;
}