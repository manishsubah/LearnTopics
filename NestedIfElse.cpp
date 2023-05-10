#include<iostream>
#include<math.h>
using namespace std;

bool PrimeNum(int num) {
    for(int i=2; i<=sqrt(num); i++) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int number;
    cout<<"Enter natural number: ";
    cin>>number;

    if(true) {
        if(PrimeNum(number)) {
            cout<<number<<" is Prime number.";
        } else {
            cout<<number<<" is Composite number.";
        }
    } 

    return 0;
}