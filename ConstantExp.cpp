#include<iostream>
using namespace std;

const float PI = 3.14;

float circle(float radius) {
    return PI*radius*radius;
}
int main() {
    float radius = 5;

    cout<<"Area of Circle: "<<circle(radius)<<endl;
    return 0;
}