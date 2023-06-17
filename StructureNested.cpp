#include<iostream>
using namespace std;

struct College {
    char collegeName[40] = "Ram Dhari Singh Dinkar College";
    struct Student {
        int rollNo;
        string name;
    }std;
};
int main() {
    struct College col;
    
    cout<<sizeof(col)<<endl;
    col.std.name = "Maruti";
    col.std.rollNo = 12011;

    cout<<"Name: "<<col.std.name<<endl;
    cout<<"Roll No.: "<<col.std.rollNo<<endl;
    
    return 0;
}