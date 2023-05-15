#include<iostream>
using namespace std;

int main() {
    int arr[5];

    arr[0] = 101;
    arr[1] = 102;
    arr[2] = 103;
    arr[3] = 104;
    arr[4] = 105;

    for(int i=0; i<5; i++) {
        cout<<"Elements at index "<<i<<": "<<arr[i]<<endl;
    }
}