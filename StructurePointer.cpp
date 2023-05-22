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
    Student *std1 = &std; // Pointer
    std.roll = 12011;
    std.name = "Raman Kr.";
    std.marks = 354;
    std.grade = 'B';
    // data access by pointer
    cout<<"Roll No.: "<<std1->roll<<endl;
    cout<<"Name: "<<std1->name<<endl;
    cout<<"Marks: "<<std1->marks<<endl;
    cout<<"Grade: "<<std1->grade;
    return 0;
}