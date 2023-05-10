#include<iostream>
using namespace std;

int main() {
    int age;

    cout<<"Enter your current age: ";
    cin>>age;

    if(age >= 18) {
        cout<<"You are eligible to Vote.";
    } else {
        cout<<"You are not eligible to Vote.";
    }

    return 0;
}