#include<iostream>
using namespace std;

int main() {
    int var = 23;
    int *ptr;
    ptr = &var;

    cout<<"Value: "<<var<<endl;
    cout<<"Address: "<<ptr<<endl;
    cout<<"Pointer address: "<<&ptr<<endl;
    cout<<"Pointer value: "<<*ptr<<endl;

    *ptr = 50;
    cout<<"New Value: "<<var<<endl;

    return 0;
}