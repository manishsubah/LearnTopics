#include<iostream>
using namespace std;

void traverseArray(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout<<*(arr+i)<<" ";
    }
}
int main() {
    int arr[6] = {12, 22, 25, 33, 29, 44};

    traverseArray(arr, 6);
    return 0;
}