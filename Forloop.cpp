#include<iostream>
using namespace std;

void SubArray(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        int start = i;
        for(int j=i; j<size; j++) {
            int end = j;
            for(int k=start; k<=end; k++) {
                sum = sum + arr[k];
                cout<<arr[k]<<" ";
            }
            cout<<"Sum: "<<sum;  
            sum = 0;     
            cout<<endl;     
        }   
        
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    SubArray(arr, size);
    return 0;
}