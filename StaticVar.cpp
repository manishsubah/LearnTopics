#include<iostream>
using namespace std;

class Global{
    public:
    static int var;
    
};

int Global::var = 120025;

int main() {
    auto val = 12.5;
    Global gb;
    cout<<"The Balance = "<<gb.var<<endl;
    cout<<"The value of automatic variable: "<<val;
    return 0;
}