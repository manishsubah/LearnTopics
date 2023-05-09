#include<iostream>
using namespace std;

class Candidate {
    public:
    //instance variables
    int rollCode;
    string name;
    string center;

};
int main() {
    
    Candidate cd;
    cd.rollCode = 1001;
    cd.name = "Shiva";
    cd.center = "New Delhi";
    cout<<"Candidate Name: "<<cd.name<<endl;
    cout<<"Roll Code : "<<cd.rollCode<<endl;
    cout<<"Center Name :"<<cd.center<<endl;
    
    return 0;
    
}