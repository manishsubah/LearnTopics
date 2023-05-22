#include<iostream>
using namespace std;
class Instrument {
    public:
    virtual void makeSound() {
        cout<<"Intruement Playing.....";
    }
};
class Classical: public Instrument{
    public:
    void makeSound() {
        cout<<"Classical Playing......";
    }
};
int main() {
    Instrument *ins = new Classical();
    //ins->makeSound();

    Instrument *inst[2] = {ins};
    for(int i=0; i<2; i++) {
        inst[i]-> makeSound();
    } 
    return 0;
}