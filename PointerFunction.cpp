#include<iostream>
using namespace std;

int cube(int x) {
    return x*x*x;
}
bool switchFan(string str) {
    if(str == "true") {
        return true;
    }
    return false;
}
int main() {
    int num = 4;
    int result;
    

    int (*funptr)(int);
    funptr = cube;

    result = (*funptr)(num);

    cout<<"The volume of cube: "<<result<<endl;

    string fan = "true";
    bool (*swhfan)(string);
    swhfan = switchFan;
    bool operation = (*swhfan)(fan);
    cout<<"Fan is on: "<<operation<<endl;

    return 0;
}