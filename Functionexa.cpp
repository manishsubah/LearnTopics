#include<iostream>
using namespace std;

void printMin(int arr[]) {
    int min = arr[0];
    for(int i=0; i<6; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    cout<<"Min element is: "<<min;
}

int main() {
    int arr[] = {12, 23, 22, 4, 55, 11};
    printMin(arr);
    return 0;
}
