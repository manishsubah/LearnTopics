#include<iostream>
using namespace std;

int main() {
    const int result = 2;
    int *pt = (int*) &result;
    cout<<"Initial Value: "<<result<<endl;
    *pt = 220;
    cout<<"Modified Value: "<<result<<endl;

    const volatile int count = 1;
    int *ptr = (int*) &count;
    cout<<"Initial Value: "<<count<<endl;
    *ptr = 110;
    cout<<"Modified Value: "<<count<<endl;

    return 0;
}