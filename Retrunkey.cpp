#include<iostream>
using namespace std;

int SUM(int a, int b) {
    int add = a + b;
    return add;
}
int main() {
    int num1 = 28;
    int num2 = 33;
    int sumNum = SUM(num1, num2);
    cout<<"The sum: "<<sumNum;
    return 0;

}