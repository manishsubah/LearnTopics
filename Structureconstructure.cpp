#include<iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    Employee() { //default
    id = 100;
    name = "Steve Jobs";
    }
    Employee(int id1, string name1) { //parameterised
        id = id1;
        name = name1;
    }
};
int main() {
    Employee emp;
    Employee emp1(101, "Steve Rogers");

    cout<<emp.id<<endl;
    cout<<emp.name<<endl;
    cout<<emp1.id<<endl;
    cout<<emp1.name;
    return 0;
}