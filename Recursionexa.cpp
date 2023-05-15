#include<iostream>
using namespace std;

void fun(int n) {
    if(n == 1) {
        cout<<n;
        return;
    }
    cout<<n<<" ";
    fun(n-1);
}
int main() {
    int n = 10;
    fun(n);
    return 0;
}