#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int first = 0, last = size - 1;
    while(first<last) {
        int temp = arr[last];
        arr[last] = arr[first];
        arr[first] = temp;
        first++;
        last--;
    }
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {2, 5, 8, 4, 9};
    int size = 5;
    reverseArray(arr, size);
    return 0;
}