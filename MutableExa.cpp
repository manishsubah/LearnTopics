#include<iostream>
using namespace std;

class Test {
    public:
    mutable int xx;
    int yy;
    Test() {
        xx = 99;
        yy = 55;
    }
    
};
int main() {
    const Test ts;
    int a = ts.xx = 199;
    //int b = ts.yy = 500; // error

    cout<<"The value of xx: "<<a<<endl;
    cout<<"The value of yy: "<<ts.yy;
    return 0;
}