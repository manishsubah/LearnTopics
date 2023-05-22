#include<iostream>
using namespace std;

class institute {
    public:
    string name; //data member
    void getInfo() { //member function
        cout<<"Academy name: "<<name;
    }
};
int main() {
    institute inst; //declaring object
    inst.name = "ABC Academy"; //accessig data member
    inst.getInfo(); //accessing member function
    return 0;
}
