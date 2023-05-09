#include<iostream>
using namespace std;

//defining constant
#define CONST 2

int rectancle(int length, int breadth) {
    return CONST*(length + breadth);
}

int main() {
    int l = 12, b = 8;

    cout<<"Perimeter of Rectangle: "<<rectancle(l,b)<<endl;
    return 0;
}