#include<iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    int marks;
    char grade;
};
int main() {
    struct Student std;
    std.roll = 12011;
    std.name = "Raman Kr.";
    std.marks = 354;
    std.grade = 'B';

    cout<<"Roll No.: "<<std.roll<<endl;
    cout<<"Name: "<<std.name<<endl;
    cout<<"Marks: "<<std.marks<<endl;
    cout<<"Grade: "<<std.grade;
    return 0;
}