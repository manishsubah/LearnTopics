#include<iostream>
using namespace std;

struct Employee {
    int id;
    string name;
};
int main() {
    Employee emp[5];
    for(int i=0; i<5; i++) {
        cin>>emp[i].id;
        cin>>emp[i].name;
    }
    for(int i=0; i<5; i++) {
        cout<<"Employee: "<<i+1<<endl;
        cout<<emp[i].id<<" "<<emp[i].name<<endl;
    }
    return 0;
}