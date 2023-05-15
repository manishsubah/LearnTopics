#include<iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    int *ptr;

    ptr = arr;

    cout<<"The elements of the array are: "<<
        ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<endl;

        return 0;
}