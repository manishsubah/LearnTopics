#include<iostream>
using namespace std;

void printNumber() {
    int n = 1;
    label: 
    cout<<n<<" ";
    n++;
    if(n<=10) {
        goto label;
    }
}
int main() {
    printNumber();
    return 0;
}