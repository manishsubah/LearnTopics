#include<iostream>
using namespace std;

int main() {
    const int DECIMAL = 128;
    const int OCTAL = 0200;
    const int HEX = 0x80;
    const int BINARY = 0b10000000;

    cout<<"Decimal Literal: "<<DECIMAL<<endl;
    cout<<"Octal Literal: "<<OCTAL<<endl;
    cout<<"Hex Literal: "<<HEX<<endl;
    cout<<"Binary Literal: "<<BINARY<<endl;
    return 0;
}