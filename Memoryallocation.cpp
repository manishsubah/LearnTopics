#include<iostream>
using namespace std;

class Animal {
    public:
    Animal() {
        cout<<"Animal class constructor invoked."<<endl;
    }
    ~Animal() {
        cout<<"Animal class destructor invoked."<<endl;
    }
};
int main() {
    Animal *dog = new(nothrow) Animal; 
    delete dog;

    return 0;
}
//nothrow - insufficient memory in the heap segment during run time, can be avoid using a 'nothrow' argument