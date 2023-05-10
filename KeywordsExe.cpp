#include<iostream>
using namespace std;

class Employee {
    private:
    int salary;
    public:
    Employee() {
        salary = 12000;
    }
    friend class KnowAbout;
};
class KnowAbout {
    public:
    void display(Employee& emp) {
        cout<<"Salary: "<<emp.salary;
    }

};

int main() {
    
    auto num = "Number"; //keyword
    cout<<num<<endl;

    Employee em;
    KnowAbout ka;
    ka.display(em);
    return 0;

}