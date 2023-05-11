#include<iostream>
#include<math.h>

using namespace std;

void findNum(int arr[], int size, int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            cout<<"Number found at position: "<<i+1;
            break;
        }
    }
}
int main() {
    int arr[] = {12,55,88,44,65,32,23};
    int n = sizeof(arr);
    int key = 44;

    findNum(arr, n, key);
    return 0;
}