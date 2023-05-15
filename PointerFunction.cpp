#include<iostream>
using namespace std;

bool switchFan(string str) {
    if(str == "true") {
        return true;
    }
    return false;
}
int main() {

    string fan = "true";

    bool (*swhfan)(string);

    swhfan = switchFan;
    bool operation = (*swhfan)(fan);
    
    cout<<"Fan is on: "<<operation<<endl;

    return 0;
}